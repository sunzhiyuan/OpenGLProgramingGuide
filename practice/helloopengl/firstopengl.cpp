#include<iostream>
using namespace std;
#include"LoadShaders.h"
enum VAO_IDs{Triangles,NumVAOs};
enum Buffer_IDs{ArrayBuffer,NumBuffers};
enum Attrib_IDs{vPosition = 0};
GLuint VAOs[NumVAOs];
GLuint Buffers[NumBuffers];
const GLuint NumVertices = 6;

void
init(void)
{
    glGenVertexArrays(NumVAOs,VAOs);
}
