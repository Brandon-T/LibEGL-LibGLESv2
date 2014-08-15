#ifndef EXPORTS_H_INCLUDED
#define EXPORTS_H_INCLUDED

#if defined _WIN32 || defined _WIN64
#include <windows.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#else
#include <dlfcn.h>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#define __stdcall
#endif // defined

#include <stdbool.h>
#include <string.h>
#include <stdio.h>

extern void* module;

extern bool Initialize(void);
extern bool DeInitialize(void);

extern void (__stdcall *ptr_glActiveTexture)(GLenum texture);
extern void (__stdcall *ptr_glAttachShader)(GLuint program, GLuint shader);
extern void (__stdcall *ptr_glBindAttribLocation)(GLuint program, GLuint index, const GLchar* name);
extern void (__stdcall *ptr_glBindBuffer)(GLenum target, GLuint buffer);
extern void (__stdcall *ptr_glBindFramebuffer)(GLenum target, GLuint framebuffer);
extern void (__stdcall *ptr_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
extern void (__stdcall *ptr_glBindTexture)(GLenum target, GLuint texture);
extern void (__stdcall *ptr_glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void (__stdcall *ptr_glBlendEquation)(GLenum mode);
extern void (__stdcall *ptr_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
extern void (__stdcall *ptr_glBlendFunc)(GLenum sfactor, GLenum dfactor);
extern void (__stdcall *ptr_glBlendFuncSeparate)(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern void (__stdcall *ptr_glBufferData)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
extern void (__stdcall *ptr_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
extern GLenum (__stdcall *ptr_glCheckFramebufferStatus)(GLenum target);
extern void (__stdcall *ptr_glClear)(GLbitfield mask);
extern void (__stdcall *ptr_glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void (__stdcall *ptr_glClearDepthf)(GLclampf depth);
extern void (__stdcall *ptr_glClearStencil)(GLint s);
extern void (__stdcall *ptr_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void (__stdcall *ptr_glCompileShader)(GLuint shader);
extern void (__stdcall *ptr_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
extern void (__stdcall *ptr_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
extern void (__stdcall *ptr_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void (__stdcall *ptr_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern GLuint (__stdcall *ptr_glCreateProgram)(void);
extern GLuint (__stdcall *ptr_glCreateShader)(GLenum type);
extern void (__stdcall *ptr_glCullFace)(GLenum mode);
extern void (__stdcall *ptr_glDeleteBuffers)(GLsizei n, const GLuint* buffers);
extern void (__stdcall *ptr_glDeleteFramebuffers)(GLsizei n, const GLuint* framebuffers);
extern void (__stdcall *ptr_glDeleteProgram)(GLuint program);
extern void (__stdcall *ptr_glDeleteRenderbuffers)(GLsizei n, const GLuint* renderbuffers);
extern void (__stdcall *ptr_glDeleteShader)(GLuint shader);
extern void (__stdcall *ptr_glDeleteTextures)(GLsizei n, const GLuint* textures);
extern void (__stdcall *ptr_glDepthFunc)(GLenum func);
extern void (__stdcall *ptr_glDepthMask)(GLboolean flag);
extern void (__stdcall *ptr_glDepthRangef)(GLclampf zNear, GLclampf zFar);
extern void (__stdcall *ptr_glDetachShader)(GLuint program, GLuint shader);
extern void (__stdcall *ptr_glDisable)(GLenum cap);
extern void (__stdcall *ptr_glDisableVertexAttribArray)(GLuint index);
extern void (__stdcall *ptr_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
extern void (__stdcall *ptr_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
extern void (__stdcall *ptr_glEnable)(GLenum cap);
extern void (__stdcall *ptr_glEnableVertexAttribArray)(GLuint index);
extern void (__stdcall *ptr_glFinish)(void);
extern void (__stdcall *ptr_glFlush)(void);
extern void (__stdcall *ptr_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void (__stdcall *ptr_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void (__stdcall *ptr_glFrontFace)(GLenum mode);
extern void (__stdcall *ptr_glGenBuffers)(GLsizei n, GLuint* buffers);
extern void (__stdcall *ptr_glGenFramebuffers)(GLsizei n, GLuint* framebuffers);
extern void (__stdcall *ptr_glGenRenderbuffers)(GLsizei n, GLuint* renderbuffers);
extern void (__stdcall *ptr_glGenTextures)(GLsizei n, GLuint* textures);
extern void (__stdcall *ptr_glGenerateMipmap)(GLenum target);
extern void (__stdcall *ptr_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void (__stdcall *ptr_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
extern void (__stdcall *ptr_glGetAttachedShaders)(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
extern int (__stdcall *ptr_glGetAttribLocation)(GLuint program, const GLchar* name);
extern void (__stdcall *ptr_glGetBooleanv)(GLenum pname, GLboolean* params);
extern void (__stdcall *ptr_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint* params);
extern GLenum (__stdcall *ptr_glGetError)(void);
extern void (__stdcall *ptr_glGetFloatv)(GLenum pname, GLfloat* params);
extern void (__stdcall *ptr_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
extern void (__stdcall *ptr_glGetIntegerv)(GLenum pname, GLint* params);
extern void (__stdcall *ptr_glGetProgramInfoLog)(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
extern void (__stdcall *ptr_glGetProgramiv)(GLuint program, GLenum pname, GLint* params);
extern void (__stdcall *ptr_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint* params);
extern void (__stdcall *ptr_glGetShaderInfoLog)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
extern void (__stdcall *ptr_glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
extern void (__stdcall *ptr_glGetShaderSource)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
extern void (__stdcall *ptr_glGetShaderiv)(GLuint shader, GLenum pname, GLint* params);
extern const GLubyte* (__stdcall *ptr_glGetString)(GLenum name);
extern void (__stdcall *ptr_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat* params);
extern void (__stdcall *ptr_glGetTexParameteriv)(GLenum target, GLenum pname, GLint* params);
extern int (__stdcall *ptr_glGetUniformLocation)(GLuint program, const GLchar* name);
extern void (__stdcall *ptr_glGetUniformfv)(GLuint program, GLint location, GLfloat* params);
extern void (__stdcall *ptr_glGetUniformiv)(GLuint program, GLint location, GLint* params);
extern void (__stdcall *ptr_glGetVertexAttribPointerv)(GLuint index, GLenum pname, GLvoid** pointer);
extern void (__stdcall *ptr_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat* params);
extern void (__stdcall *ptr_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint* params);
extern void (__stdcall *ptr_glHint)(GLenum target, GLenum mode);
extern GLboolean (__stdcall *ptr_glIsBuffer)(GLuint buffer);
extern GLboolean (__stdcall *ptr_glIsEnabled)(GLenum cap);
extern GLboolean (__stdcall *ptr_glIsFramebuffer)(GLuint framebuffer);
extern GLboolean (__stdcall *ptr_glIsProgram)(GLuint program);
extern GLboolean (__stdcall *ptr_glIsRenderbuffer)(GLuint renderbuffer);
extern GLboolean (__stdcall *ptr_glIsShader)(GLuint shader);
extern GLboolean (__stdcall *ptr_glIsTexture)(GLuint texture);
extern void (__stdcall *ptr_glLineWidth)(GLfloat width);
extern void (__stdcall *ptr_glLinkProgram)(GLuint program);
extern void (__stdcall *ptr_glPixelStorei)(GLenum pname, GLint param);
extern void (__stdcall *ptr_glPolygonOffset)(GLfloat factor, GLfloat units);
extern void (__stdcall *ptr_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
extern void (__stdcall *ptr_glReleaseShaderCompiler)(void);
extern void __stdcall glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void (__stdcall *ptr_glSampleCoverage)(GLclampf value, GLboolean invert);
extern void (__stdcall *ptr_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
extern void (__stdcall *ptr_glShaderBinary)(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
extern void (__stdcall *ptr_glShaderSource)(GLuint shader, GLsizei count, const GLchar* const* string, const GLint *length);
extern void (__stdcall *ptr_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
extern void (__stdcall *ptr_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
extern void (__stdcall *ptr_glStencilMask)(GLuint mask);
extern void (__stdcall *ptr_glStencilMaskSeparate)(GLenum face, GLuint mask);
extern void (__stdcall *ptr_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
extern void (__stdcall *ptr_glStencilOpSeparate)(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
extern void (__stdcall *ptr_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
extern void (__stdcall *ptr_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
extern void (__stdcall *ptr_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat* params);
extern void (__stdcall *ptr_glTexParameteri)(GLenum target, GLenum pname, GLint param);
extern void (__stdcall *ptr_glTexParameteriv)(GLenum target, GLenum pname, const GLint* params);
extern void (__stdcall *ptr_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
extern void (__stdcall *ptr_glUniform1f)(GLint location, GLfloat x);
extern void (__stdcall *ptr_glUniform1fv)(GLint location, GLsizei count, const GLfloat* v);
extern void (__stdcall *ptr_glUniform1i)(GLint location, GLint x);
extern void (__stdcall *ptr_glUniform1iv)(GLint location, GLsizei count, const GLint* v);
extern void (__stdcall *ptr_glUniform2f)(GLint location, GLfloat x, GLfloat y);
extern void (__stdcall *ptr_glUniform2fv)(GLint location, GLsizei count, const GLfloat* v);
extern void (__stdcall *ptr_glUniform2i)(GLint location, GLint x, GLint y);
extern void (__stdcall *ptr_glUniform2iv)(GLint location, GLsizei count, const GLint* v);
extern void (__stdcall *ptr_glUniform3f)(GLint location, GLfloat x, GLfloat y, GLfloat z);
extern void (__stdcall *ptr_glUniform3fv)(GLint location, GLsizei count, const GLfloat* v);
extern void (__stdcall *ptr_glUniform3i)(GLint location, GLint x, GLint y, GLint z);
extern void (__stdcall *ptr_glUniform3iv)(GLint location, GLsizei count, const GLint* v);
extern void (__stdcall *ptr_glUniform4f)(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void (__stdcall *ptr_glUniform4fv)(GLint location, GLsizei count, const GLfloat* v);
extern void (__stdcall *ptr_glUniform4i)(GLint location, GLint x, GLint y, GLint z, GLint w);
extern void (__stdcall *ptr_glUniform4iv)(GLint location, GLsizei count, const GLint* v);
extern void (__stdcall *ptr_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern void (__stdcall *ptr_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern void (__stdcall *ptr_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern void (__stdcall *ptr_glUseProgram)(GLuint program);
extern void (__stdcall *ptr_glValidateProgram)(GLuint program);
extern void (__stdcall *ptr_glVertexAttrib1f)(GLuint index, GLfloat x);
extern void (__stdcall *ptr_glVertexAttrib1fv)(GLuint index, const GLfloat* values);
extern void (__stdcall *ptr_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
extern void (__stdcall *ptr_glVertexAttrib2fv)(GLuint index, const GLfloat* values);
extern void (__stdcall *ptr_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void (__stdcall *ptr_glVertexAttrib3fv)(GLuint index, const GLfloat* values);
extern void (__stdcall *ptr_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void (__stdcall *ptr_glVertexAttrib4fv)(GLuint index, const GLfloat* values);
extern void (__stdcall *ptr_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
extern void (__stdcall *ptr_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);


extern void (__stdcall *ptr_glTexImage3DOES)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
extern void (__stdcall *ptr_glBlitFramebufferANGLE)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern void (__stdcall *ptr_glRenderbufferStorageMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern void (__stdcall *ptr_glDeleteFencesNV)(GLsizei n, const GLuint* fences);
extern void (__stdcall *ptr_glFinishFenceNV)(GLuint fence);
extern void (__stdcall *ptr_glGenFencesNV)(GLsizei n, GLuint* fences);
extern void (__stdcall *ptr_glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params);
extern GLboolean (__stdcall *ptr_glIsFenceNV)(GLuint fence);
extern void (__stdcall *ptr_glSetFenceNV)(GLuint fence, GLenum condition);
extern GLboolean (__stdcall *ptr_glTestFenceNV)(GLuint fence);
extern void (__stdcall *ptr_glGetTranslatedShaderSourceANGLE)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
extern void (__stdcall *ptr_glTexStorage2DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern GLenum (__stdcall *ptr_glGetGraphicsResetStatusEXT)(void);
extern void (__stdcall *ptr_glReadnPixelsEXT)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data);
extern void (__stdcall *ptr_glGetnUniformfvEXT)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
extern void (__stdcall *ptr_glGetnUniformivEXT)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
extern void (__stdcall *ptr_glGenQueriesEXT)(GLsizei n, GLuint* ids);
extern void (__stdcall *ptr_glDeleteQueriesEXT)(GLsizei n, const GLuint *ids);
extern GLboolean (__stdcall *ptr_glIsQueryEXT)(GLuint id);
extern void (__stdcall *ptr_glBeginQueryEXT)(GLenum target, GLuint id);
extern void (__stdcall *ptr_glEndQueryEXT)(GLenum target);
extern void (__stdcall *ptr_glGetQueryivEXT)(GLenum target, GLenum pname, GLint *params);
extern void (__stdcall *ptr_glGetQueryObjectuivEXT)(GLuint id, GLenum pname, GLuint *params);
extern void (__stdcall *ptr_glVertexAttribDivisorANGLE)(GLuint index, GLuint divisor);
extern void (__stdcall *ptr_glDrawArraysInstancedANGLE)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern void (__stdcall *ptr_glDrawElementsInstancedANGLE)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
extern void (__stdcall *ptr_glProgramBinaryOES)(GLuint program, GLenum binaryFormat, const void *binary, GLint length);
extern void (__stdcall *ptr_glGetProgramBinaryOES)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
extern void (__stdcall *ptr_glDrawBuffersEXT)(GLsizei n, const GLenum *bufs);


extern void* (*ptr_glCreateContext)(const void* config, const void* shareContext);
extern void (*ptr_glDestroyContext)(void* context);
extern void (*ptr_glMakeCurrent)(void* context, void* display, void* surface);
extern void* (*ptr_glGetCurrentContext)();
extern __eglMustCastToProperFunctionPointerType (__stdcall *ptr_glGetProcAddress)(const char *procname);
extern bool (__stdcall *ptr_glBindTexImage)(void* surface);
extern void* (*ptr_glCreateRenderer)(void* display, HDC hDc, EGLNativeDisplayType displayId);
extern void (*ptr_glDestroyRenderer)(void* renderer);

typedef const unsigned char* (*GetCategoryEnabledFlagFunc)(const char* name);
typedef void (*AddTraceEventFunc)(char phase, const unsigned char* categoryGroupEnabled, const char* name, unsigned long long id, int numArgs, const char** argNames, const unsigned char* argTypes, const unsigned long long* argValues, unsigned char flags);
extern void __stdcall (__stdcall *ptr_SetTraceFunctionPointers)(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func);

#endif // EXPORTS_H_INCLUDED
