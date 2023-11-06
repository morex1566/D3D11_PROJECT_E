#pragma once
#include "OWidget.h"

class WTools : public OWidget
{
public:
	WTools();
	WTools(const WTools&)									= default;
	WTools& operator=(const WTools&)						= default;
	WTools(WTools&&) noexcept								= default;
	WTools& operator=(WTools&&) noexcept					= default;
	~WTools() override;

	EHandleResultType										Initialize() override;
	void													Release() override;
	/**
	 * \brief Called only once before entering the main loop.
	 */
	void													Start() override;
	/**
	 * \brief Called once when the every frame.
	 */
	void													Tick() override;
	/**
	 * \brief Called only once immediately after the main loop is over.
	 */
	void													End() override;

private:
	void													Render() override;

};

