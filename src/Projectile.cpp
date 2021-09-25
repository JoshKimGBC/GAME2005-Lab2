#include "Projectile.h"
#include "TextureManager.h"

Projectile::Projectile()
{
	TextureManager::Instance().load("../Assets/textures/projectile.png", "jackedpika");

	auto size = TextureManager::Instance().getTextureSize("jackedpika");
	setWidth(size.x);
	setHeight(size.y);
}

Projectile::~Projectile()
= default;

void Projectile::draw()
{
	TextureManager::Instance().draw("jackedpika",
		getTransform()->position.x, getTransform()->position.y, 0, 255, true);
}

void Projectile::update()
{
}

void Projectile::clean()
{
}