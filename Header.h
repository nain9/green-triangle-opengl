#ifndef HEADER_H
#define HEADER_H

// ID шейдерной программы
GLuint Program;
// ID атрибута
GLint Attrib_vertex;
// ID Vertex Buffer Object
GLuint VBO;

struct Vertex {
	GLfloat x;
	GLfloat y;
};

// Исходный код вершинного шейдера
const char* VertexShaderSource = R"(
 #version 330 core
 in vec2 coord;
 void main() {
 gl_Position = vec4(coord, 0.0, 1.0);
 }
)";

// Исходный код фрагментного шейдера
const char* FragShaderSource = R"(
 #version 330 core
 out vec4 color;
 void main() {
 color = vec4(0, 1, 0, 1);
 }
)";

void Init();
void InitShader();
void InitVBO();
void Draw();
void Release();
void ReleaseShader();
void ReleaseVBO();
void ShaderLog(unsigned int shader);
void checkOpenGLerror();

#endif // !HEADER_H
