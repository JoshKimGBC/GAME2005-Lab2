#pragma once
#ifndef __PROJECTILE__
#define __PROJECTILE__

#include "Sprite.h"

class Projectile final : public Sprite
{
public:
	Projectile();
	~Projectile();

	// Life Cycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

};

#endif /* defined (__BOB2__) */
