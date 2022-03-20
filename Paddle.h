#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Paddle
{
public:

	Paddle();

	void InitBuffers();
	void Render();


private:
	GLuint VBO, VAO, IBO;

	float verticies[13] = {
		-0.75f, 1.0f, 0.0f,
		0.75f, 1.0f, 0.0f,
		0.75f, -1.0f, 0.0f,
		0.75f, -1.0f, 0.0f
	};

	uint32_t indicies[6]
	{
		0, 2, 3,
		0, 1, 3
	};
};

