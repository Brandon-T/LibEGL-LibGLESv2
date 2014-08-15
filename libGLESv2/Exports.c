#include "Exports.h"

void (__stdcall *ptr_glActiveTexture)(GLenum texture);
void (__stdcall *ptr_glAttachShader)(GLuint program, GLuint shader);
void (__stdcall *ptr_glBindAttribLocation)(GLuint program, GLuint index, const GLchar* name);
void (__stdcall *ptr_glBindBuffer)(GLenum target, GLuint buffer);
void (__stdcall *ptr_glBindFramebuffer)(GLenum target, GLuint framebuffer);
void (__stdcall *ptr_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
void (__stdcall *ptr_glBindTexture)(GLenum target, GLuint texture);
void (__stdcall *ptr_glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (__stdcall *ptr_glBlendEquation)(GLenum mode);
void (__stdcall *ptr_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
void (__stdcall *ptr_glBlendFunc)(GLenum sfactor, GLenum dfactor);
void (__stdcall *ptr_glBlendFuncSeparate)(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void (__stdcall *ptr_glBufferData)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
void (__stdcall *ptr_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
GLenum (__stdcall *ptr_glCheckFramebufferStatus)(GLenum target);
void (__stdcall *ptr_glClear)(GLbitfield mask);
void (__stdcall *ptr_glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (__stdcall *ptr_glClearDepthf)(GLclampf depth);
void (__stdcall *ptr_glClearStencil)(GLint s);
void (__stdcall *ptr_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void (__stdcall *ptr_glCompileShader)(GLuint shader);
void (__stdcall *ptr_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void (__stdcall *ptr_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void (__stdcall *ptr_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void (__stdcall *ptr_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLuint (__stdcall *ptr_glCreateProgram)(void);
GLuint (__stdcall *ptr_glCreateShader)(GLenum type);
void (__stdcall *ptr_glCullFace)(GLenum mode);
void (__stdcall *ptr_glDeleteBuffers)(GLsizei n, const GLuint* buffers);
void (__stdcall *ptr_glDeleteFramebuffers)(GLsizei n, const GLuint* framebuffers);
void (__stdcall *ptr_glDeleteProgram)(GLuint program);
void (__stdcall *ptr_glDeleteRenderbuffers)(GLsizei n, const GLuint* renderbuffers);
void (__stdcall *ptr_glDeleteShader)(GLuint shader);
void (__stdcall *ptr_glDeleteTextures)(GLsizei n, const GLuint* textures);
void (__stdcall *ptr_glDepthFunc)(GLenum func);
void (__stdcall *ptr_glDepthMask)(GLboolean flag);
void (__stdcall *ptr_glDepthRangef)(GLclampf zNear, GLclampf zFar);
void (__stdcall *ptr_glDetachShader)(GLuint program, GLuint shader);
void (__stdcall *ptr_glDisable)(GLenum cap);
void (__stdcall *ptr_glDisableVertexAttribArray)(GLuint index);
void (__stdcall *ptr_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
void (__stdcall *ptr_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
void (__stdcall *ptr_glEnable)(GLenum cap);
void (__stdcall *ptr_glEnableVertexAttribArray)(GLuint index);
void (__stdcall *ptr_glFinish)(void);
void (__stdcall *ptr_glFlush)(void);
void (__stdcall *ptr_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void (__stdcall *ptr_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
void (__stdcall *ptr_glFrontFace)(GLenum mode);
void (__stdcall *ptr_glGenBuffers)(GLsizei n, GLuint* buffers);
void (__stdcall *ptr_glGenFramebuffers)(GLsizei n, GLuint* framebuffers);
void (__stdcall *ptr_glGenRenderbuffers)(GLsizei n, GLuint* renderbuffers);
void (__stdcall *ptr_glGenTextures)(GLsizei n, GLuint* textures);
void (__stdcall *ptr_glGenerateMipmap)(GLenum target);
void (__stdcall *ptr_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
void (__stdcall *ptr_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
void (__stdcall *ptr_glGetAttachedShaders)(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
int (__stdcall *ptr_glGetAttribLocation)(GLuint program, const GLchar* name);
void (__stdcall *ptr_glGetBooleanv)(GLenum pname, GLboolean* params);
void (__stdcall *ptr_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint* params);
GLenum (__stdcall *ptr_glGetError)(void);
void (__stdcall *ptr_glGetFloatv)(GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetIntegerv)(GLenum pname, GLint* params);
void (__stdcall *ptr_glGetProgramInfoLog)(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void (__stdcall *ptr_glGetProgramiv)(GLuint program, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetShaderInfoLog)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
void (__stdcall *ptr_glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
void (__stdcall *ptr_glGetShaderSource)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
void (__stdcall *ptr_glGetShaderiv)(GLuint shader, GLenum pname, GLint* params);
const GLubyte* (__stdcall *ptr_glGetString)(GLenum name);
void (__stdcall *ptr_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetTexParameteriv)(GLenum target, GLenum pname, GLint* params);
int (__stdcall *ptr_glGetUniformLocation)(GLuint program, const GLchar* name);
void (__stdcall *ptr_glGetUniformfv)(GLuint program, GLint location, GLfloat* params);
void (__stdcall *ptr_glGetUniformiv)(GLuint program, GLint location, GLint* params);
void (__stdcall *ptr_glGetVertexAttribPointerv)(GLuint index, GLenum pname, GLvoid** pointer);
void (__stdcall *ptr_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint* params);
void (__stdcall *ptr_glHint)(GLenum target, GLenum mode);
GLboolean (__stdcall *ptr_glIsBuffer)(GLuint buffer);
GLboolean (__stdcall *ptr_glIsEnabled)(GLenum cap);
GLboolean (__stdcall *ptr_glIsFramebuffer)(GLuint framebuffer);
GLboolean (__stdcall *ptr_glIsProgram)(GLuint program);
GLboolean (__stdcall *ptr_glIsRenderbuffer)(GLuint renderbuffer);
GLboolean (__stdcall *ptr_glIsShader)(GLuint shader);
GLboolean (__stdcall *ptr_glIsTexture)(GLuint texture);
void (__stdcall *ptr_glLineWidth)(GLfloat width);
void (__stdcall *ptr_glLinkProgram)(GLuint program);
void (__stdcall *ptr_glPixelStorei)(GLenum pname, GLint param);
void (__stdcall *ptr_glPolygonOffset)(GLfloat factor, GLfloat units);
void (__stdcall *ptr_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
void (__stdcall *ptr_glReleaseShaderCompiler)(void);
void (__stdcall *ptr_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
void (__stdcall *ptr_glSampleCoverage)(GLclampf value, GLboolean invert);
void (__stdcall *ptr_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
void (__stdcall *ptr_glShaderBinary)(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
//void (__stdcall *ptr_glShaderSource)(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
void (__stdcall *ptr_glShaderSource)(GLuint shader, GLsizei count, const GLchar* const* string, const GLint *length);
void (__stdcall *ptr_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
void (__stdcall *ptr_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
void (__stdcall *ptr_glStencilMask)(GLuint mask);
void (__stdcall *ptr_glStencilMaskSeparate)(GLenum face, GLuint mask);
void (__stdcall *ptr_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
void (__stdcall *ptr_glStencilOpSeparate)(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
void (__stdcall *ptr_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glTexParameteri)(GLenum target, GLenum pname, GLint param);
void (__stdcall *ptr_glTexParameteriv)(GLenum target, GLenum pname, const GLint* params);
void (__stdcall *ptr_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glUniform1f)(GLint location, GLfloat x);
void (__stdcall *ptr_glUniform1fv)(GLint location, GLsizei count, const GLfloat* v);
void (__stdcall *ptr_glUniform1i)(GLint location, GLint x);
void (__stdcall *ptr_glUniform1iv)(GLint location, GLsizei count, const GLint* v);
void (__stdcall *ptr_glUniform2f)(GLint location, GLfloat x, GLfloat y);
void (__stdcall *ptr_glUniform2fv)(GLint location, GLsizei count, const GLfloat* v);
void (__stdcall *ptr_glUniform2i)(GLint location, GLint x, GLint y);
void (__stdcall *ptr_glUniform2iv)(GLint location, GLsizei count, const GLint* v);
void (__stdcall *ptr_glUniform3f)(GLint location, GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glUniform3fv)(GLint location, GLsizei count, const GLfloat* v);
void (__stdcall *ptr_glUniform3i)(GLint location, GLint x, GLint y, GLint z);
void (__stdcall *ptr_glUniform3iv)(GLint location, GLsizei count, const GLint* v);
void (__stdcall *ptr_glUniform4f)(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glUniform4fv)(GLint location, GLsizei count, const GLfloat* v);
void (__stdcall *ptr_glUniform4i)(GLint location, GLint x, GLint y, GLint z, GLint w);
void (__stdcall *ptr_glUniform4iv)(GLint location, GLsizei count, const GLint* v);
void (__stdcall *ptr_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void (__stdcall *ptr_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void (__stdcall *ptr_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void (__stdcall *ptr_glUseProgram)(GLuint program);
void (__stdcall *ptr_glValidateProgram)(GLuint program);
void (__stdcall *ptr_glVertexAttrib1f)(GLuint index, GLfloat x);
void (__stdcall *ptr_glVertexAttrib1fv)(GLuint index, const GLfloat* values);
void (__stdcall *ptr_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
void (__stdcall *ptr_glVertexAttrib2fv)(GLuint index, const GLfloat* values);
void (__stdcall *ptr_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glVertexAttrib3fv)(GLuint index, const GLfloat* values);
void (__stdcall *ptr_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glVertexAttrib4fv)(GLuint index, const GLfloat* values);
void (__stdcall *ptr_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
void (__stdcall *ptr_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);


void (__stdcall *ptr_glTexImage3DOES)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glBlitFramebufferANGLE)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
void (__stdcall *ptr_glRenderbufferStorageMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void (__stdcall *ptr_glDeleteFencesNV)(GLsizei n, const GLuint* fences);
void (__stdcall *ptr_glFinishFenceNV)(GLuint fence);
void (__stdcall *ptr_glGenFencesNV)(GLsizei n, GLuint* fences);
void (__stdcall *ptr_glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params);
GLboolean (__stdcall *ptr_glIsFenceNV)(GLuint fence);
void (__stdcall *ptr_glSetFenceNV)(GLuint fence, GLenum condition);
GLboolean (__stdcall *ptr_glTestFenceNV)(GLuint fence);
void (__stdcall *ptr_glGetTranslatedShaderSourceANGLE)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
void (__stdcall *ptr_glTexStorage2DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLenum (__stdcall *ptr_glGetGraphicsResetStatusEXT)(void);
void (__stdcall *ptr_glReadnPixelsEXT)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data);
void (__stdcall *ptr_glGetnUniformfvEXT)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
void (__stdcall *ptr_glGetnUniformivEXT)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
void (__stdcall *ptr_glGenQueriesEXT)(GLsizei n, GLuint* ids);
void (__stdcall *ptr_glDeleteQueriesEXT)(GLsizei n, const GLuint *ids);
GLboolean (__stdcall *ptr_glIsQueryEXT)(GLuint id);
void (__stdcall *ptr_glBeginQueryEXT)(GLenum target, GLuint id);
void (__stdcall *ptr_glEndQueryEXT)(GLenum target);
void (__stdcall *ptr_glGetQueryivEXT)(GLenum target, GLenum pname, GLint *params);
void (__stdcall *ptr_glGetQueryObjectuivEXT)(GLuint id, GLenum pname, GLuint *params);
void (__stdcall *ptr_glVertexAttribDivisorANGLE)(GLuint index, GLuint divisor);
void (__stdcall *ptr_glDrawArraysInstancedANGLE)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
void (__stdcall *ptr_glDrawElementsInstancedANGLE)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
void (__stdcall *ptr_glProgramBinaryOES)(GLuint program, GLenum binaryFormat, const void *binary, GLint length);
void (__stdcall *ptr_glGetProgramBinaryOES)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
void (__stdcall *ptr_glDrawBuffersEXT)(GLsizei n, const GLenum *bufs);

void* (*ptr_glCreateContext)(const void* config, const void* shareContext);
void (*ptr_glDestroyContext)(void* context);
void (*ptr_glMakeCurrent)(void* context, void* display, void* surface);
void* (*ptr_glGetCurrentContext)();
__eglMustCastToProperFunctionPointerType (__stdcall *ptr_glGetProcAddress)(const char *procname);
bool (__stdcall *ptr_glBindTexImage)(void* surface);
void* (*ptr_glCreateRenderer)(void* display, HDC hDc, EGLNativeDisplayType displayId);
void (*ptr_glDestroyRenderer)(void* renderer);
void __stdcall (__stdcall *ptr_SetTraceFunctionPointers)(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func);

void* module = NULL;

void* xLoadLibrary(const char* file)
{
    #if defined _WIN32 || defined _WIN64
    return LoadLibraryA(file);
    #else
    return dlopen(file, RTLD_LAZY | RTLD_GLOBAL);
    #endif // defined
}

void xCloseLibrary(void* module)
{
    #if defined _WIN32 || defined _WIN64
    FreeLibrary(module);
    #else
    dlclose(module);
    #endif // defined
}

void* xGetProcAddress(void* __restrict handle, const char* __restrict name)
{
    #if defined _WIN32 || defined _WIN64
    return GetProcAddress(handle, name);
    #else
    return dlsym(handle, name);
    #endif // defined
}

bool Initialize(void)
{
    char Root[256] = {0};

    #if defined _WIN32 || defined _WIN64
        GetSystemDirectoryA(Root, 256);
        #ifdef _MSC_VER
            strcat_s(Root, "\\opengl32.dll");
        #else
            strcat(Root, "\\opengl32.dll");
        #endif // defined

    #else

        strcat(Root, "/usr/lib");
        #if defined(__x86_64__)
        strcat(Root, "/x86_64-linux-gnu");
        #else
        strcat(Root, "/i386-linux-gnu");
        #endif // defined
        strcat(Root, "/libGL.so");
    #endif // defined

    if ((module = xLoadLibrary("C:/Users/Brandon/Desktop/libglesv2.dll")))
    {
        ptr_glActiveTexture = xGetProcAddress(module, "glActiveTexture");
        ptr_glAttachShader = xGetProcAddress(module, "glAttachShader");
        ptr_glBindAttribLocation = xGetProcAddress(module, "glBindAttribLocation");
        ptr_glBindBuffer = xGetProcAddress(module, "glBindBuffer");
        ptr_glBindFramebuffer = xGetProcAddress(module, "glBindFramebuffer");
        ptr_glBindRenderbuffer = xGetProcAddress(module, "glBindRenderbuffer");
        ptr_glBindTexture = xGetProcAddress(module, "glBindTexture");
        ptr_glBlendColor = xGetProcAddress(module, "glBlendColor");
        ptr_glBlendEquation = xGetProcAddress(module, "glBlendEquation");
        ptr_glBlendEquationSeparate = xGetProcAddress(module, "glBlendEquationSeparate");
        ptr_glBlendFunc = xGetProcAddress(module, "glBlendFunc");
        ptr_glBlendFuncSeparate = xGetProcAddress(module, "glBlendFuncSeparate");
        ptr_glBufferData = xGetProcAddress(module, "glBufferData");
        ptr_glBufferSubData = xGetProcAddress(module, "glBufferSubData");
        ptr_glCheckFramebufferStatus = xGetProcAddress(module, "glCheckFramebufferStatus");
        ptr_glClear = xGetProcAddress(module, "glClear");
        ptr_glClearColor = xGetProcAddress(module, "glClearColor");
        ptr_glClearDepthf = xGetProcAddress(module, "glClearDepthf");
        ptr_glClearStencil = xGetProcAddress(module, "glClearStencil");
        ptr_glColorMask = xGetProcAddress(module, "glColorMask");
        ptr_glCompileShader = xGetProcAddress(module, "glCompileShader");
        ptr_glCompressedTexImage2D = xGetProcAddress(module, "glCompressedTexImage2D");
        ptr_glCompressedTexSubImage2D = xGetProcAddress(module, "glCompressedTexSubImage2D");
        ptr_glCopyTexImage2D = xGetProcAddress(module, "glCopyTexImage2D");
        ptr_glCopyTexSubImage2D = xGetProcAddress(module, "glCopyTexSubImage2D");
        ptr_glCreateProgram = xGetProcAddress(module, "glCreateProgram");
        ptr_glCreateShader = xGetProcAddress(module, "glCreateShader");
        ptr_glCullFace = xGetProcAddress(module, "glCullFace");
        ptr_glDeleteBuffers = xGetProcAddress(module, "glDeleteBuffers");
        ptr_glDeleteFramebuffers = xGetProcAddress(module, "glDeleteFramebuffers");
        ptr_glDeleteProgram = xGetProcAddress(module, "glDeleteProgram");
        ptr_glDeleteRenderbuffers = xGetProcAddress(module, "glDeleteRenderbuffers");
        ptr_glDeleteShader = xGetProcAddress(module, "glDeleteShader");
        ptr_glDeleteTextures = xGetProcAddress(module, "glDeleteTextures");
        ptr_glDepthFunc = xGetProcAddress(module, "glDepthFunc");
        ptr_glDepthMask = xGetProcAddress(module, "glDepthMask");
        ptr_glDepthRangef = xGetProcAddress(module, "glDepthRangef");
        ptr_glDetachShader = xGetProcAddress(module, "glDetachShader");
        ptr_glDisable = xGetProcAddress(module, "glDisable");
        ptr_glDisableVertexAttribArray = xGetProcAddress(module, "glDisableVertexAttribArray");
        ptr_glDrawArrays = xGetProcAddress(module, "glDrawArrays");
        ptr_glDrawElements = xGetProcAddress(module, "glDrawElements");
        ptr_glEnable = xGetProcAddress(module, "glEnable");
        ptr_glEnableVertexAttribArray = xGetProcAddress(module, "glEnableVertexAttribArray");
        ptr_glFinish = xGetProcAddress(module, "glFinish");
        ptr_glFlush = xGetProcAddress(module, "glFlush");
        ptr_glFramebufferRenderbuffer = xGetProcAddress(module, "glFramebufferRenderbuffer");
        ptr_glFramebufferTexture2D = xGetProcAddress(module, "glFramebufferTexture2D");
        ptr_glFrontFace = xGetProcAddress(module, "glFrontFace");
        ptr_glGenBuffers = xGetProcAddress(module, "glGenBuffers");
        ptr_glGenFramebuffers = xGetProcAddress(module, "glGenFramebuffers");
        ptr_glGenRenderbuffers = xGetProcAddress(module, "glGenRenderbuffers");
        ptr_glGenTextures = xGetProcAddress(module, "glGenTextures");
        ptr_glGenerateMipmap = xGetProcAddress(module, "glGenerateMipmap");
        ptr_glGetActiveAttrib = xGetProcAddress(module, "glGetActiveAttrib");
        ptr_glGetActiveUniform = xGetProcAddress(module, "glGetActiveUniform");
        ptr_glGetAttachedShaders = xGetProcAddress(module, "glGetAttachedShaders");
        ptr_glGetAttribLocation = xGetProcAddress(module, "glGetAttribLocation");
        ptr_glGetBooleanv = xGetProcAddress(module, "glGetBooleanv");
        ptr_glGetBufferParameteriv = xGetProcAddress(module, "glGetBufferParameteriv");
        ptr_glGetError = xGetProcAddress(module, "glGetError");
        ptr_glGetFloatv = xGetProcAddress(module, "glGetFloatv");
        ptr_glGetFramebufferAttachmentParameteriv = xGetProcAddress(module, "glGetFramebufferAttachmentParameteriv");
        ptr_glGetIntegerv = xGetProcAddress(module, "glGetIntegerv");
        ptr_glGetProgramInfoLog = xGetProcAddress(module, "glGetProgramInfoLog");
        ptr_glGetProgramiv = xGetProcAddress(module, "glGetProgramiv");
        ptr_glGetRenderbufferParameteriv = xGetProcAddress(module, "glGetRenderbufferParameteriv");
        ptr_glGetShaderInfoLog = xGetProcAddress(module, "glGetShaderInfoLog");
        ptr_glGetShaderPrecisionFormat = xGetProcAddress(module, "glGetShaderPrecisionFormat");
        ptr_glGetShaderSource = xGetProcAddress(module, "glGetShaderSource");
        ptr_glGetShaderiv = xGetProcAddress(module, "glGetShaderiv");
        ptr_glGetString = xGetProcAddress(module, "glGetString");
        ptr_glGetTexParameterfv = xGetProcAddress(module, "glGetTexParameterfv");
        ptr_glGetTexParameteriv = xGetProcAddress(module, "glGetTexParameteriv");
        ptr_glGetUniformLocation = xGetProcAddress(module, "glGetUniformLocation");
        ptr_glGetUniformfv = xGetProcAddress(module, "glGetUniformfv");
        ptr_glGetUniformiv = xGetProcAddress(module, "glGetUniformiv");
        ptr_glGetVertexAttribPointerv = xGetProcAddress(module, "glGetVertexAttribPointerv");
        ptr_glGetVertexAttribfv = xGetProcAddress(module, "glGetVertexAttribfv");
        ptr_glGetVertexAttribiv = xGetProcAddress(module, "glGetVertexAttribiv");
        ptr_glHint = xGetProcAddress(module, "glHint");
        ptr_glIsBuffer = xGetProcAddress(module, "glIsBuffer");
        ptr_glIsEnabled = xGetProcAddress(module, "glIsEnabled");
        ptr_glIsFramebuffer = xGetProcAddress(module, "glIsFramebuffer");
        ptr_glIsProgram = xGetProcAddress(module, "glIsProgram");
        ptr_glIsRenderbuffer = xGetProcAddress(module, "glIsRenderbuffer");
        ptr_glIsShader = xGetProcAddress(module, "glIsShader");
        ptr_glIsTexture = xGetProcAddress(module, "glIsTexture");
        ptr_glLineWidth = xGetProcAddress(module, "glLineWidth");
        ptr_glLinkProgram = xGetProcAddress(module, "glLinkProgram");
        ptr_glPixelStorei = xGetProcAddress(module, "glPixelStorei");
        ptr_glPolygonOffset = xGetProcAddress(module, "glPolygonOffset");
        ptr_glReadPixels = xGetProcAddress(module, "glReadPixels");
        ptr_glReleaseShaderCompiler = xGetProcAddress(module, "glReleaseShaderCompiler");
        ptr_glRenderbufferStorage = xGetProcAddress(module, "glRenderbufferStorage");
        ptr_glSampleCoverage = xGetProcAddress(module, "glSampleCoverage");
        ptr_glScissor = xGetProcAddress(module, "glScissor");
        ptr_glShaderBinary = xGetProcAddress(module, "glShaderBinary");
        ptr_glShaderSource = xGetProcAddress(module, "glShaderSource");
        ptr_glStencilFunc = xGetProcAddress(module, "glStencilFunc");
        ptr_glStencilFuncSeparate = xGetProcAddress(module, "glStencilFuncSeparate");
        ptr_glStencilMask = xGetProcAddress(module, "glStencilMask");
        ptr_glStencilMaskSeparate = xGetProcAddress(module, "glStencilMaskSeparate");
        ptr_glStencilOp = xGetProcAddress(module, "glStencilOp");
        ptr_glStencilOpSeparate = xGetProcAddress(module, "glStencilOpSeparate");
        ptr_glTexImage2D = xGetProcAddress(module, "glTexImage2D");
        ptr_glTexParameterf = xGetProcAddress(module, "glTexParameterf");
        ptr_glTexParameterfv = xGetProcAddress(module, "glTexParameterfv");
        ptr_glTexParameteri = xGetProcAddress(module, "glTexParameteri");
        ptr_glTexParameteriv = xGetProcAddress(module, "glTexParameteriv");
        ptr_glTexSubImage2D = xGetProcAddress(module, "glTexSubImage2D");
        ptr_glUniform1f = xGetProcAddress(module, "glUniform1f");
        ptr_glUniform1fv = xGetProcAddress(module, "glUniform1fv");
        ptr_glUniform1i = xGetProcAddress(module, "glUniform1i");
        ptr_glUniform1iv = xGetProcAddress(module, "glUniform1iv");
        ptr_glUniform2f = xGetProcAddress(module, "glUniform2f");
        ptr_glUniform2fv = xGetProcAddress(module, "glUniform2fv");
        ptr_glUniform2i = xGetProcAddress(module, "glUniform2i");
        ptr_glUniform2iv = xGetProcAddress(module, "glUniform2iv");
        ptr_glUniform3f = xGetProcAddress(module, "glUniform3f");
        ptr_glUniform3fv = xGetProcAddress(module, "glUniform3fv");
        ptr_glUniform3i = xGetProcAddress(module, "glUniform3i");
        ptr_glUniform3iv = xGetProcAddress(module, "glUniform3iv");
        ptr_glUniform4f = xGetProcAddress(module, "glUniform4f");
        ptr_glUniform4fv = xGetProcAddress(module, "glUniform4fv");
        ptr_glUniform4i = xGetProcAddress(module, "glUniform4i");
        ptr_glUniform4iv = xGetProcAddress(module, "glUniform4iv");
        ptr_glUniformMatrix2fv = xGetProcAddress(module, "glUniformMatrix2fv");
        ptr_glUniformMatrix3fv = xGetProcAddress(module, "glUniformMatrix3fv");
        ptr_glUniformMatrix4fv = xGetProcAddress(module, "glUniformMatrix4fv");
        ptr_glUseProgram = xGetProcAddress(module, "glUseProgram");
        ptr_glValidateProgram = xGetProcAddress(module, "glValidateProgram");
        ptr_glVertexAttrib1f = xGetProcAddress(module, "glVertexAttrib1f");
        ptr_glVertexAttrib1fv = xGetProcAddress(module, "glVertexAttrib1fv");
        ptr_glVertexAttrib2f = xGetProcAddress(module, "glVertexAttrib2f");
        ptr_glVertexAttrib2fv = xGetProcAddress(module, "glVertexAttrib2fv");
        ptr_glVertexAttrib3f = xGetProcAddress(module, "glVertexAttrib3f");
        ptr_glVertexAttrib3fv = xGetProcAddress(module, "glVertexAttrib3fv");
        ptr_glVertexAttrib4f = xGetProcAddress(module, "glVertexAttrib4f");
        ptr_glVertexAttrib4fv = xGetProcAddress(module, "glVertexAttrib4fv");
        ptr_glVertexAttribPointer = xGetProcAddress(module, "glVertexAttribPointer");
        ptr_glViewport = xGetProcAddress(module, "glViewport");


        ptr_glTexImage3DOES = xGetProcAddress(module, "glTexImage3DOES");
        ptr_glBlitFramebufferANGLE = xGetProcAddress(module, "glBlitFramebufferANGLE");
        ptr_glRenderbufferStorageMultisampleANGLE = xGetProcAddress(module, "glRenderbufferStorageMultisampleANGLE");
        ptr_glDeleteFencesNV = xGetProcAddress(module, "glDeleteFencesNV");
        ptr_glFinishFenceNV = xGetProcAddress(module, "glFinishFenceNV");
        ptr_glGenFencesNV = xGetProcAddress(module, "glGenFencesNV");
        ptr_glGetFenceivNV = xGetProcAddress(module, "glGetFenceivNV");
        ptr_glIsFenceNV = xGetProcAddress(module, "glIsFenceNV");
        ptr_glSetFenceNV = xGetProcAddress(module, "glSetFenceNV");
        ptr_glTestFenceNV = xGetProcAddress(module, "glTestFenceNV");
        ptr_glGetTranslatedShaderSourceANGLE = xGetProcAddress(module, "glGetTranslatedShaderSourceANGLE");
        ptr_glTexStorage2DEXT = xGetProcAddress(module, "glTexStorage2DEXT");
        ptr_glGetGraphicsResetStatusEXT = xGetProcAddress(module, "glGetGraphicsResetStatusEXT");
        ptr_glReadnPixelsEXT = xGetProcAddress(module, "glReadnPixelsEXT");
        ptr_glGetnUniformfvEXT = xGetProcAddress(module, "glGetnUniformfvEXT");
        ptr_glGetnUniformivEXT = xGetProcAddress(module, "glGetnUniformivEXT");
        ptr_glGenQueriesEXT = xGetProcAddress(module, "glGenQueriesEXT");
        ptr_glDeleteQueriesEXT = xGetProcAddress(module, "glDeleteQueriesEXT");
        ptr_glIsQueryEXT = xGetProcAddress(module, "glIsQueryEXT");
        ptr_glBeginQueryEXT = xGetProcAddress(module, "glBeginQueryEXT");
        ptr_glEndQueryEXT = xGetProcAddress(module, "glEndQueryEXT");
        ptr_glGetQueryivEXT = xGetProcAddress(module, "glGetQueryivEXT");
        ptr_glGetQueryObjectuivEXT = xGetProcAddress(module, "glGetQueryObjectuivEXT");
        ptr_glVertexAttribDivisorANGLE = xGetProcAddress(module, "glVertexAttribDivisorANGLE");
        ptr_glDrawArraysInstancedANGLE = xGetProcAddress(module, "glDrawArraysInstancedANGLE");
        ptr_glDrawElementsInstancedANGLE = xGetProcAddress(module, "glDrawElementsInstancedANGLE");
        ptr_glProgramBinaryOES = xGetProcAddress(module, "glProgramBinaryOES");
        ptr_glGetProgramBinaryOES = xGetProcAddress(module, "glGetProgramBinaryOES");
        ptr_glDrawBuffersEXT = xGetProcAddress(module, "glDrawBuffersEXT");

        ptr_glCreateContext = xGetProcAddress(module, 144);
        ptr_glDestroyContext = xGetProcAddress(module, 145);
        ptr_glMakeCurrent = xGetProcAddress(module, 146);
        ptr_glGetCurrentContext = xGetProcAddress(module, 147);
        ptr_glGetProcAddress = xGetProcAddress(module, 148);
        ptr_glBindTexImage = xGetProcAddress(module, 158);
        ptr_glCreateRenderer = xGetProcAddress(module, 177);
        ptr_glDestroyRenderer = xGetProcAddress(module, 178);
        ptr_SetTraceFunctionPointers = xGetProcAddress(module, "SetTraceFunctionPointers");
        return true;
    }
    return false;
}

bool DeInitialize(void)
{
    xCloseLibrary(module);
    module = NULL;
    return true;
}


extern void __stdcall glActiveTexture(GLenum texture)
{
    ptr_glActiveTexture(texture);
}

extern void __stdcall glAttachShader(GLuint program, GLuint shader)
{
    ptr_glAttachShader(program, shader);
}

extern void __stdcall glBindAttribLocation(GLuint program, GLuint index, const GLchar* name)
{
    ptr_glBindAttribLocation(program, index, name);
}

extern void __stdcall glBindBuffer(GLenum target, GLuint buffer)
{
    ptr_glBindBuffer(target, buffer);
}

extern void __stdcall glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    ptr_glBindFramebuffer(target, framebuffer);
}

extern void __stdcall glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    ptr_glBindRenderbuffer(target, renderbuffer);
}

extern void __stdcall glBindTexture(GLenum target, GLuint texture)
{
    ptr_glBindTexture(target, texture);
}

extern void __stdcall glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    ptr_glBlendColor(red, green, blue, alpha);
}

extern void __stdcall glBlendEquation(GLenum mode)
{
    ptr_glBlendEquation(mode);
}

extern void __stdcall glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    ptr_glBlendEquationSeparate(modeRGB, modeAlpha);
}

extern void __stdcall glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    ptr_glBlendFunc(sfactor, dfactor);
}

extern void __stdcall glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    ptr_glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

extern void __stdcall glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
{
    ptr_glBufferData(target, size, data, usage);
}

extern void __stdcall glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
{
    ptr_glBufferSubData(target, offset, size, data);
}

extern GLenum __stdcall glCheckFramebufferStatus(GLenum target)
{
    return ptr_glCheckFramebufferStatus(target);
}

extern void __stdcall glClear(GLbitfield mask)
{
    ptr_glClear(mask);
}

extern void __stdcall glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    ptr_glClearColor(red, green, blue, alpha);
}

extern void __stdcall glClearDepthf(GLclampf depth)
{
    ptr_glClearDepthf(depth);
}

extern void __stdcall glClearStencil(GLint s)
{
    ptr_glClearStencil(s);
}

extern void __stdcall glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    ptr_glColorMask(red, green, blue, alpha);
}

extern void __stdcall glCompileShader(GLuint shader)
{
    ptr_glCompileShader(shader);
}

extern void __stdcall glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data)
{
    ptr_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

extern void __stdcall glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
{
    ptr_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

extern void __stdcall glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    ptr_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

extern void __stdcall glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);

}

extern GLuint __stdcall glCreateProgram(void)
{
    return ptr_glCreateProgram();
}

extern GLuint __stdcall glCreateShader(GLenum type)
{
    return ptr_glCreateShader(type);
}

extern void __stdcall glCullFace(GLenum mode)
{
    ptr_glCullFace(mode);
}

extern void __stdcall glDeleteBuffers(GLsizei n, const GLuint* buffers)
{
    ptr_glDeleteBuffers(n, buffers);
}

extern void __stdcall glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers)
{
    ptr_glDeleteFramebuffers(n, framebuffers);
}

extern void __stdcall glDeleteProgram(GLuint program)
{
    ptr_glDeleteProgram(program);
}

extern void __stdcall glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers)
{
    ptr_glDeleteRenderbuffers(n, renderbuffers);
}

extern void __stdcall glDeleteShader(GLuint shader)
{
    ptr_glDeleteShader(shader);
}

extern void __stdcall glDeleteTextures(GLsizei n, const GLuint* textures)
{
    ptr_glDeleteTextures(n, textures);
}

extern void __stdcall glDepthFunc(GLenum func)
{
    ptr_glDepthFunc(func);
}

extern void __stdcall glDepthMask(GLboolean flag)
{
    ptr_glDepthMask(flag);
}

extern void __stdcall glDepthRangef(GLclampf zNear, GLclampf zFar)
{
    ptr_glDepthRangef(zNear, zFar);
}

extern void __stdcall glDetachShader(GLuint program, GLuint shader)
{
    ptr_glDetachShader(program, shader);
}

extern void __stdcall glDisable(GLenum cap)
{
    ptr_glDisable(cap);
}

extern void __stdcall glDisableVertexAttribArray(GLuint index)
{
    ptr_glDisableVertexAttribArray(index);
}

extern void __stdcall glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    ptr_glDrawArrays(mode, first, count);
}

extern void __stdcall glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
    ptr_glDrawElements(mode, count, type, indices);
}

extern void __stdcall glEnable(GLenum cap)
{
    ptr_glEnable(cap);
}

extern void __stdcall glEnableVertexAttribArray(GLuint index)
{
    ptr_glEnableVertexAttribArray(index);
}

extern void __stdcall glFinish(void)
{
    ptr_glFinish();
}

extern void __stdcall glFlush(void)
{
    ptr_glFlush();
}

extern void __stdcall glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    ptr_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

extern void __stdcall glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    ptr_glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

extern void __stdcall glFrontFace(GLenum mode)
{
    ptr_glFrontFace(mode);
}

extern void __stdcall glGenBuffers(GLsizei n, GLuint* buffers)
{
    ptr_glGenBuffers(n, buffers);
}

extern void __stdcall glGenFramebuffers(GLsizei n, GLuint* framebuffers)
{
    ptr_glGenFramebuffers(n, framebuffers);
}

extern void __stdcall glGenRenderbuffers(GLsizei n, GLuint* renderbuffers)
{
    ptr_glGenRenderbuffers(n, renderbuffers);
}

extern void __stdcall glGenTextures(GLsizei n, GLuint* textures)
{
    ptr_glGenTextures(n, textures);
}

extern void __stdcall glGenerateMipmap(GLenum target)
{
    ptr_glGenerateMipmap(target);
}

extern void __stdcall glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
    ptr_glGetActiveAttrib(program, index, bufsize, length, size, type, name);
}

extern void __stdcall glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
    ptr_glGetActiveUniform(program, index, bufsize, length, size, type, name);
}

extern void __stdcall glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders)
{
    ptr_glGetAttachedShaders(program, maxcount, count, shaders);
}

extern int __stdcall glGetAttribLocation(GLuint program, const GLchar* name)
{
    return ptr_glGetAttribLocation(program, name);
}

extern void __stdcall glGetBooleanv(GLenum pname, GLboolean* params)
{
    ptr_glGetBooleanv(pname, params);
}

extern void __stdcall glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
    ptr_glGetBufferParameteriv(target, pname, params);
}

extern GLenum __stdcall glGetError(void)
{
    return ptr_glGetError();
}

extern void __stdcall glGetFloatv(GLenum pname, GLfloat* params)
{
    ptr_glGetFloatv(pname, params);
}

extern void __stdcall glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
    ptr_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

extern void __stdcall glGetIntegerv(GLenum pname, GLint* params)
{
    ptr_glGetIntegerv(pname, params);
}

extern void __stdcall glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
    ptr_glGetProgramInfoLog(program, bufsize, length, infolog);
}

extern void __stdcall glGetProgramiv(GLuint program, GLenum pname, GLint* params)
{
    ptr_glGetProgramiv(program, pname, params);
}

extern void __stdcall glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
    ptr_glGetRenderbufferParameteriv(target, pname, params);
}

extern void __stdcall glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
    ptr_glGetShaderInfoLog(shader, bufsize, length, infolog);
}

extern void __stdcall glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision)
{
    ptr_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

extern void __stdcall glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
    ptr_glGetShaderSource(shader, bufsize, length, source);
}

extern void __stdcall glGetShaderiv(GLuint shader, GLenum pname, GLint* params)
{
    ptr_glGetShaderiv(shader, pname, params);
}

extern const GLubyte* __stdcall glGetString(GLenum name)
{
    return ptr_glGetString(name);
}

extern void __stdcall glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
    ptr_glGetTexParameterfv(target, pname, params);
}

extern void __stdcall glGetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
    ptr_glGetTexParameteriv(target, pname, params);
}

extern int __stdcall glGetUniformLocation(GLuint program, const GLchar* name)
{
    return ptr_glGetUniformLocation(program, name);
}

extern void __stdcall glGetUniformfv(GLuint program, GLint location, GLfloat* params)
{
    ptr_glGetUniformfv(program, location, params);
}

extern void __stdcall glGetUniformiv(GLuint program, GLint location, GLint* params)
{
    ptr_glGetUniformiv(program, location, params);
}

extern void __stdcall glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer)
{
    ptr_glGetVertexAttribPointerv(index, pname, pointer);
}

extern void __stdcall glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params)
{
    ptr_glGetVertexAttribfv(index, pname, params);
}

extern void __stdcall glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params)
{
    ptr_glGetVertexAttribiv(index, pname, params);
}

extern void __stdcall glHint(GLenum target, GLenum mode)
{
    ptr_glHint(target, mode);
}

extern GLboolean __stdcall glIsBuffer(GLuint buffer)
{
    return ptr_glIsBuffer(buffer);
}

extern GLboolean __stdcall glIsEnabled(GLenum cap)
{
    return ptr_glIsEnabled(cap);
}

extern GLboolean __stdcall glIsFramebuffer(GLuint framebuffer)
{
    return ptr_glIsFramebuffer(framebuffer);
}

extern GLboolean __stdcall glIsProgram(GLuint program)
{
    return ptr_glIsProgram(program);
}

extern GLboolean __stdcall glIsRenderbuffer(GLuint renderbuffer)
{
    return ptr_glIsRenderbuffer(renderbuffer);
}

extern GLboolean __stdcall glIsShader(GLuint shader)
{
    return ptr_glIsShader(shader);
}

extern GLboolean __stdcall glIsTexture(GLuint texture)
{
    return ptr_glIsTexture(texture);
}

extern void __stdcall glLineWidth(GLfloat width)
{
    ptr_glLineWidth(width);
}

extern void __stdcall glLinkProgram(GLuint program)
{
    ptr_glLinkProgram(program);
}

extern void __stdcall glPixelStorei(GLenum pname, GLint param)
{
    ptr_glPixelStorei(pname, param);
}

extern void __stdcall glPolygonOffset(GLfloat factor, GLfloat units)
{
    ptr_glPolygonOffset(factor, units);
}

extern void __stdcall glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
    ptr_glReadPixels(x, y, width, height, format, type, pixels);
}

extern void __stdcall glReleaseShaderCompiler(void)
{
    ptr_glReleaseShaderCompiler();
}

extern void __stdcall glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    ptr_glRenderbufferStorage(target, internalformat, width, height);
}

extern void __stdcall glSampleCoverage(GLclampf value, GLboolean invert)
{
    ptr_glSampleCoverage(value, invert);
}

extern void __stdcall glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glScissor(x, y, width, height);
}

extern void __stdcall glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length)
{
    ptr_glShaderBinary(n, shaders, binaryformat, binary, length);
}

extern void __stdcall glShaderSource(GLuint shader, GLsizei count, const GLchar* const* string, const GLint *length)
{
    ptr_glShaderSource(shader, count, string, length);
}

extern void __stdcall glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    ptr_glStencilFunc(func, ref, mask);
}

extern void __stdcall glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    ptr_glStencilFuncSeparate(face, func, ref, mask);
}

extern void __stdcall glStencilMask(GLuint mask)
{
    ptr_glStencilMask(mask);
}

extern void __stdcall glStencilMaskSeparate(GLenum face, GLuint mask)
{
    ptr_glStencilMaskSeparate(face, mask);
}

extern void __stdcall glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    ptr_glStencilOp(fail, zfail, zpass);
}

extern void __stdcall glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
{
    ptr_glStencilOpSeparate(face, fail, zfail, zpass);
}

extern void __stdcall glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

extern void __stdcall glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    ptr_glTexParameterf(target, pname, param);
}

extern void __stdcall glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
    ptr_glTexParameterfv(target, pname, params);
}

extern void __stdcall glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    ptr_glTexParameteri(target, pname, param);
}

extern void __stdcall glTexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
    ptr_glTexParameteriv(target, pname, params);
}

extern void __stdcall glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

extern void __stdcall glUniform1f(GLint location, GLfloat x)
{
    ptr_glUniform1f(location, x);
}

extern void __stdcall glUniform1fv(GLint location, GLsizei count, const GLfloat* v)
{
    ptr_glUniform1fv(location, count, v);
}

extern void __stdcall glUniform1i(GLint location, GLint x)
{
    ptr_glUniform1i(location, x);
}

extern void __stdcall glUniform1iv(GLint location, GLsizei count, const GLint* v)
{
    ptr_glUniform1iv(location, count, v);
}

extern void __stdcall glUniform2f(GLint location, GLfloat x, GLfloat y)
{
    ptr_glUniform2f(location, x, y);
}

extern void __stdcall glUniform2fv(GLint location, GLsizei count, const GLfloat* v)
{
    ptr_glUniform2fv(location, count, v);
}

extern void __stdcall glUniform2i(GLint location, GLint x, GLint y)
{
    ptr_glUniform2i(location, x, y);
}

extern void __stdcall glUniform2iv(GLint location, GLsizei count, const GLint* v)
{
    ptr_glUniform2iv(location, count, v);
}

extern void __stdcall glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glUniform3f(location, x, y, z);
}

extern void __stdcall glUniform3fv(GLint location, GLsizei count, const GLfloat* v)
{
    ptr_glUniform3fv(location, count, v);
}

extern void __stdcall glUniform3i(GLint location, GLint x, GLint y, GLint z)
{
    ptr_glUniform3i(location, x, y, z);
}

extern void __stdcall glUniform3iv(GLint location, GLsizei count, const GLint* v)
{
    ptr_glUniform3iv(location, count, v);
}

extern void __stdcall glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    ptr_glUniform4f(location, x, y, z, w);
}

extern void __stdcall glUniform4fv(GLint location, GLsizei count, const GLfloat* v)
{
    ptr_glUniform4fv(location, count, v);
}

extern void __stdcall glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w)
{
    ptr_glUniform4i(location, x, y, z, w);
}

extern void __stdcall glUniform4iv(GLint location, GLsizei count, const GLint* v)
{
    ptr_glUniform4iv(location, count, v);
}

extern void __stdcall glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
    ptr_glUniformMatrix2fv(location, count, transpose, value);
}

extern void __stdcall glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
    ptr_glUniformMatrix3fv(location, count, transpose, value);
}

extern void __stdcall glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
    ptr_glUniformMatrix4fv(location, count, transpose, value);
}

extern void __stdcall glUseProgram(GLuint program)
{
    ptr_glUseProgram(program);
}

extern void __stdcall glValidateProgram(GLuint program)
{
    ptr_glValidateProgram(program);
}

extern void __stdcall glVertexAttrib1f(GLuint index, GLfloat x)
{
    ptr_glVertexAttrib1f(index, x);
}

extern void __stdcall glVertexAttrib1fv(GLuint index, const GLfloat* values)
{
    ptr_glVertexAttrib1fv(index, values);
}

extern void __stdcall glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    ptr_glVertexAttrib2f(index, x, y);
}

extern void __stdcall glVertexAttrib2fv(GLuint index, const GLfloat* values)
{
    ptr_glVertexAttrib2fv(index, values);
}

extern void __stdcall glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glVertexAttrib3f(index, x, y, z);
}

extern void __stdcall glVertexAttrib3fv(GLuint index, const GLfloat* values)
{
    ptr_glVertexAttrib3fv(index, values);
}

extern void __stdcall glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    ptr_glVertexAttrib4f(index, x, y, z, w);
}

extern void __stdcall glVertexAttrib4fv(GLuint index, const GLfloat* values)
{
    ptr_glVertexAttrib4fv(index, values);
}

extern void __stdcall glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr)
{
    ptr_glVertexAttribPointer(index, size, type, normalized, stride, ptr);
}

extern void __stdcall glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glViewport(x, y, width, height);
}



extern void __stdcall glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

extern void __stdcall glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
    ptr_glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

extern void __stdcall glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    ptr_glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

extern void __stdcall glDeleteFencesNV(GLsizei n, const GLuint* fences)
{
    ptr_glDeleteFencesNV(n, fences);
}

extern void __stdcall glFinishFenceNV(GLuint fence)
{
    ptr_glFinishFenceNV(fence);
}

extern void __stdcall glGenFencesNV(GLsizei n, GLuint* fences)
{
    ptr_glGenFencesNV(n, fences);
}

extern void __stdcall glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
{
    ptr_glGetFenceivNV(fence, pname, params);
}

extern GLboolean __stdcall glIsFenceNV(GLuint fence)
{
    return ptr_glIsFenceNV(fence);
}

extern void __stdcall glSetFenceNV(GLuint fence, GLenum condition)
{
    ptr_glSetFenceNV(fence, condition);
}

extern GLboolean __stdcall glTestFenceNV(GLuint fence)
{
    return ptr_glTestFenceNV(fence);
}

extern void __stdcall glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
    ptr_glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

extern void __stdcall glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
    ptr_glTexStorage2DEXT(target, levels, internalformat, width, height);
}

extern GLenum __stdcall glGetGraphicsResetStatusEXT(void)
{
    return ptr_glGetGraphicsResetStatusEXT();
}

extern void __stdcall glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data)
{
    return ptr_glReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

extern void __stdcall glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat* params)
{
    ptr_glGetnUniformfvEXT(program, location, bufSize, params);
}

extern void __stdcall glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint* params)
{
    ptr_glGetnUniformivEXT(program, location, bufSize, params);
}

extern void __stdcall glGenQueriesEXT(GLsizei n, GLuint* ids)
{
    ptr_glGenQueriesEXT(n, ids);
}

extern void __stdcall glDeleteQueriesEXT(GLsizei n, const GLuint *ids)
{
    ptr_glDeleteQueriesEXT(n, ids);
}

extern GLboolean __stdcall glIsQueryEXT(GLuint id)
{
    return ptr_glIsQueryEXT(id);
}

extern void __stdcall glBeginQueryEXT(GLenum target, GLuint id)
{
    ptr_glBeginQueryEXT(target, id);
}

extern void __stdcall glEndQueryEXT(GLenum target)
{
    ptr_glEndQueryEXT(target);
}

extern void __stdcall glGetQueryivEXT(GLenum target, GLenum pname, GLint *params)
{
    ptr_glGetQueryivEXT(target, pname, params);
}

extern void __stdcall glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params)
{
    ptr_glGetQueryObjectuivEXT(id, pname, params);
}

extern void __stdcall glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    ptr_glVertexAttribDivisorANGLE(index, divisor);
}

extern void __stdcall glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    ptr_glDrawArraysInstancedANGLE(mode, first, count, primcount);
}

extern void __stdcall glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
    ptr_glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

extern void __stdcall glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void *binary, GLint length)
{
    ptr_glProgramBinaryOES(program, binaryFormat, binary, length);
}

extern void __stdcall glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary)
{
    ptr_glGetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

extern void __stdcall glDrawBuffersEXT(GLsizei n, const GLenum *bufs)
{
    ptr_glDrawBuffersEXT(n, bufs);
}




extern void* glCreateContext(const void* config, const void* shareContext)
{
    return ptr_glCreateContext(config, shareContext);
}

extern void glDestroyContext(void* context)
{
    ptr_glDestroyContext(context);
}

extern void glMakeCurrent(void* context, void* display, void* surface)
{
    ptr_glMakeCurrent(context, display, surface);
}

extern void* glGetCurrentContext()
{
    return ptr_glGetCurrentContext();
}

extern __eglMustCastToProperFunctionPointerType __stdcall glGetProcAddress(const char *procname)
{
    return ptr_glGetProcAddress(procname);
}

extern bool __stdcall glBindTexImage(void* surface)
{
    return ptr_glBindTexImage(surface);
}

extern void* glCreateRenderer(void* display, HDC hDc, EGLNativeDisplayType displayId)
{
    return ptr_glCreateRenderer(display, hDc, displayId);
}

extern void glDestroyRenderer(void* renderer)
{
    ptr_glDestroyRenderer(renderer);
}

extern void __stdcall SetTraceFunctionPointers(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func)
{
    ptr_SetTraceFunctionPointers(get_category_enabled_flag, add_trace_event_func);
}
