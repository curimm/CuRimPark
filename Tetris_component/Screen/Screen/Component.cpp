#include "Component.h"
#include "GameObject.h"

// Component
Component::Component(GameObject * gameObject)
	: gameObject(gameObject),
	transform(gameObject->getTransform())
{}

// Transform
void Transform::start()
{
}

void Transform::update()
{
}

// MuScript
void MyScript::start()
{
}

void MyScript::update()
{
}
