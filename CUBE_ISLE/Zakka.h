#pragma once
#include "stdafx.h"
#include "Camera.h"

class Zakka
{
public:
	Zakka();
	~Zakka();

	Vector3 pos;
	Vector3 scl;
	Vector3 rot;
	float size;
	int slices;
	Aabb aabb;

	void Init();
	void Init_aabb();
	void Draw();
	void draw_aabb();
	void move(Camera& camera, unsigned char key);
	void yRotate(Vector3& add, int angle);
};

