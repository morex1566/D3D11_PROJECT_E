#pragma once
#include "OWidget.h"

class OWorld;

class WHierarchy : public OWidget
{
public:
	WHierarchy(const OWorld& InWorld);
	WHierarchy(const WHierarchy&)							= default;
	WHierarchy& operator=(const WHierarchy&)				= default;
	WHierarchy(WHierarchy&&) noexcept						= default;
	WHierarchy& operator=(WHierarchy&&) noexcept			= default;
	~WHierarchy() override;

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

	const OWorld*											World; // ReadOnly
};
