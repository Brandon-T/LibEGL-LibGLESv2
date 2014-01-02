#include "Exports.hpp"

Library* OriginalGLESV2 = nullptr;
ptr_glActiveTexture                         optr_glActiveTexture;
ptr_glAttachShader                          optr_glAttachShader;
ptr_glBeginQueryEXT                         optr_glBeginQueryEXT;
ptr_glBindAttribLocation                    optr_glBindAttribLocation;
ptr_glBindBuffer                            optr_glBindBuffer;
ptr_glBindFramebuffer                       optr_glBindFramebuffer;
ptr_glBindRenderbuffer                      optr_glBindRenderbuffer;
ptr_glBindTexture                           optr_glBindTexture;
ptr_glBlendColor                            optr_glBlendColor;
ptr_glBlendEquation                         optr_glBlendEquation;
ptr_glBlendEquationSeparate                 optr_glBlendEquationSeparate;
ptr_glBlendFunc                             optr_glBlendFunc;
ptr_glBlendFuncSeparate                     optr_glBlendFuncSeparate;
ptr_glBufferData                            optr_glBufferData;
ptr_glBufferSubData                         optr_glBufferSubData;
ptr_glCheckFramebufferStatus                optr_glCheckFramebufferStatus;
ptr_glClear                                 optr_glClear;
ptr_glClearColor                            optr_glClearColor;
ptr_glClearDepthf                           optr_glClearDepthf;
ptr_glClearStencil                          optr_glClearStencil;
ptr_glColorMask                             optr_glColorMask;
ptr_glCompileShader                         optr_glCompileShader;
ptr_glCompressedTexImage2D                  optr_glCompressedTexImage2D;
ptr_glCompressedTexSubImage2D               optr_glCompressedTexSubImage2D;
ptr_glCopyTexImage2D                        optr_glCopyTexImage2D;
ptr_glCopyTexSubImage2D                     optr_glCopyTexSubImage2D;
ptr_glCreateProgram                         optr_glCreateProgram;
ptr_glCreateShader                          optr_glCreateShader;
ptr_glCullFace                              optr_glCullFace;
ptr_glDeleteBuffers                         optr_glDeleteBuffers;
ptr_glDeleteFencesNV                        optr_glDeleteFencesNV;
ptr_glDeleteFramebuffers                    optr_glDeleteFramebuffers;
ptr_glDeleteProgram                         optr_glDeleteProgram;
ptr_glDeleteQueriesEXT                      optr_glDeleteQueriesEXT;
ptr_glDeleteRenderbuffers                   optr_glDeleteRenderbuffers;
ptr_glDeleteShader                          optr_glDeleteShader;
ptr_glDeleteTextures                        optr_glDeleteTextures;
ptr_glDepthFunc                             optr_glDepthFunc;
ptr_glDepthMask                             optr_glDepthMask;
ptr_glDepthRangef                           optr_glDepthRangef;
ptr_glDetachShader                          optr_glDetachShader;
ptr_glDisable                               optr_glDisable;
ptr_glDisableVertexAttribArray              optr_glDisableVertexAttribArray;
ptr_glDrawArrays                            optr_glDrawArrays;
ptr_glDrawArraysInstancedANGLE              optr_glDrawArraysInstancedANGLE;
ptr_glDrawElements                          optr_glDrawElements;
ptr_glDrawElementsInstancedANGLE            optr_glDrawElementsInstancedANGLE;
ptr_glEnable                                optr_glEnable;
ptr_glEnableVertexAttribArray               optr_glEnableVertexAttribArray;
ptr_glEndQueryEXT                           optr_glEndQueryEXT;
ptr_glFinishFenceNV                         optr_glFinishFenceNV;
ptr_glFinish                                optr_glFinish;
ptr_glFlush                                 optr_glFlush;
ptr_glFramebufferRenderbuffer               optr_glFramebufferRenderbuffer;
ptr_glFramebufferTexture2D                  optr_glFramebufferTexture2D;
ptr_glFrontFace                             optr_glFrontFace;
ptr_glGenBuffers                            optr_glGenBuffers;
ptr_glGenerateMipmap                        optr_glGenerateMipmap;
ptr_glGenFencesNV                           optr_glGenFencesNV;
ptr_glGenFramebuffers                       optr_glGenFramebuffers;
ptr_glGenQueriesEXT                         optr_glGenQueriesEXT;
ptr_glGenRenderbuffers                      optr_glGenRenderbuffers;
ptr_glGenTextures                           optr_glGenTextures;
ptr_glGetActiveAttrib                       optr_glGetActiveAttrib;
ptr_glGetActiveUniform                      optr_glGetActiveUniform;
ptr_glGetAttachedShaders                    optr_glGetAttachedShaders;
ptr_glGetAttribLocation                     optr_glGetAttribLocation;
ptr_glGetBooleanv                           optr_glGetBooleanv;
ptr_glGetBufferParameteriv                  optr_glGetBufferParameteriv;
ptr_glGetError                              optr_glGetError;
ptr_glGetFenceivNV                          optr_glGetFenceivNV;
ptr_glGetFloatv                             optr_glGetFloatv;
ptr_glGetFramebufferAttachmentParameteriv   optr_glGetFramebufferAttachmentParameteriv;
ptr_glGetGraphicsResetStatusEXT             optr_glGetGraphicsResetStatusEXT;
ptr_glGetIntegerv                           optr_glGetIntegerv;
ptr_glGetProgramiv                          optr_glGetProgramiv;
ptr_glGetProgramInfoLog                     optr_glGetProgramInfoLog;
ptr_glGetQueryivEXT                         optr_glGetQueryivEXT;
ptr_glGetQueryObjectuivEXT                  optr_glGetQueryObjectuivEXT;
ptr_glGetRenderbufferParameteriv            optr_glGetRenderbufferParameteriv;
ptr_glGetShaderiv                           optr_glGetShaderiv;
ptr_glGetShaderInfoLog                      optr_glGetShaderInfoLog;
ptr_glGetShaderPrecisionFormat              optr_glGetShaderPrecisionFormat;
ptr_glGetShaderSource                       optr_glGetShaderSource;
ptr_glGetTranslatedShaderSourceANGLE        optr_glGetTranslatedShaderSourceANGLE;
ptr_glGetString                             optr_glGetString;
ptr_glGetTexParameterfv                     optr_glGetTexParameterfv;
ptr_glGetTexParameteriv                     optr_glGetTexParameteriv;
ptr_glGetnUniformfvEXT                      optr_glGetnUniformfvEXT;
ptr_glGetUniformfv                          optr_glGetUniformfv;
ptr_glGetnUniformivEXT                      optr_glGetnUniformivEXT;
ptr_glGetUniformiv                          optr_glGetUniformiv;
ptr_glGetUniformLocation                    optr_glGetUniformLocation;
ptr_glGetVertexAttribfv                     optr_glGetVertexAttribfv;
ptr_glGetVertexAttribiv                     optr_glGetVertexAttribiv;
ptr_glGetVertexAttribPointerv               optr_glGetVertexAttribPointerv;
ptr_glHint                                  optr_glHint;
ptr_glIsBuffer                              optr_glIsBuffer;
ptr_glIsEnabled                             optr_glIsEnabled;
ptr_glIsFenceNV                             optr_glIsFenceNV;
ptr_glIsFramebuffer                         optr_glIsFramebuffer;
ptr_glIsProgram                             optr_glIsProgram;
ptr_glIsQueryEXT                            optr_glIsQueryEXT;
ptr_glIsRenderbuffer                        optr_glIsRenderbuffer;
ptr_glIsShader                              optr_glIsShader;
ptr_glIsTexture                             optr_glIsTexture;
ptr_glLineWidth                             optr_glLineWidth;
ptr_glLinkProgram                           optr_glLinkProgram;
ptr_glPixelStorei                           optr_glPixelStorei;
ptr_glPolygonOffset                         optr_glPolygonOffset;
ptr_glReadnPixelsEXT                        optr_glReadnPixelsEXT;
ptr_glReadPixels                            optr_glReadPixels;
ptr_glReleaseShaderCompiler                 optr_glReleaseShaderCompiler;
ptr_glRenderbufferStorageMultisampleANGLE   optr_glRenderbufferStorageMultisampleANGLE;
ptr_glRenderbufferStorage                   optr_glRenderbufferStorage;
ptr_glSampleCoverage                        optr_glSampleCoverage;
ptr_glSetFenceNV                            optr_glSetFenceNV;
ptr_glScissor                               optr_glScissor;
ptr_glShaderBinary                          optr_glShaderBinary;
ptr_glShaderSource                          optr_glShaderSource;
ptr_glStencilFunc                           optr_glStencilFunc;
ptr_glStencilFuncSeparate                   optr_glStencilFuncSeparate;
ptr_glStencilMask                           optr_glStencilMask;
ptr_glStencilMaskSeparate                   optr_glStencilMaskSeparate;
ptr_glStencilOp                             optr_glStencilOp;
ptr_glStencilOpSeparate                     optr_glStencilOpSeparate;
ptr_glTestFenceNV                           optr_glTestFenceNV;
ptr_glTexImage2D                            optr_glTexImage2D;
ptr_glTexParameterf                         optr_glTexParameterf;
ptr_glTexParameterfv                        optr_glTexParameterfv;
ptr_glTexParameteri                         optr_glTexParameteri;
ptr_glTexParameteriv                        optr_glTexParameteriv;
ptr_glTexStorage2DEXT                       optr_glTexStorage2DEXT;
ptr_glTexSubImage2D                         optr_glTexSubImage2D;
ptr_glUniform1f                             optr_glUniform1f;
ptr_glUniform1fv                            optr_glUniform1fv;
ptr_glUniform1i                             optr_glUniform1i;
ptr_glUniform1iv                            optr_glUniform1iv;
ptr_glUniform2f                             optr_glUniform2f;
ptr_glUniform2fv                            optr_glUniform2fv;
ptr_glUniform2i                             optr_glUniform2i;
ptr_glUniform2iv                            optr_glUniform2iv;
ptr_glUniform3f                             optr_glUniform3f;
ptr_glUniform3fv                            optr_glUniform3fv;
ptr_glUniform3i                             optr_glUniform3i;
ptr_glUniform3iv                            optr_glUniform3iv;
ptr_glUniform4f                             optr_glUniform4f;
ptr_glUniform4fv                            optr_glUniform4fv;
ptr_glUniform4i                             optr_glUniform4i;
ptr_glUniform4iv                            optr_glUniform4iv;
ptr_glUniformMatrix2fv                      optr_glUniformMatrix2fv;
ptr_glUniformMatrix3fv                      optr_glUniformMatrix3fv;
ptr_glUniformMatrix4fv                      optr_glUniformMatrix4fv;
ptr_glUseProgram                            optr_glUseProgram;
ptr_glValidateProgram                       optr_glValidateProgram;
ptr_glVertexAttrib1f                        optr_glVertexAttrib1f;
ptr_glVertexAttrib1fv                       optr_glVertexAttrib1fv;
ptr_glVertexAttrib2f                        optr_glVertexAttrib2f;
ptr_glVertexAttrib2fv                       optr_glVertexAttrib2fv;
ptr_glVertexAttrib3f                        optr_glVertexAttrib3f;
ptr_glVertexAttrib3fv                       optr_glVertexAttrib3fv;
ptr_glVertexAttrib4f                        optr_glVertexAttrib4f;
ptr_glVertexAttrib4fv                       optr_glVertexAttrib4fv;
ptr_glVertexAttribDivisorANGLE              optr_glVertexAttribDivisorANGLE;
ptr_glVertexAttribPointer                   optr_glVertexAttribPointer;
ptr_glViewport                              optr_glViewport;
ptr_glBlitFramebufferANGLE                  optr_glBlitFramebufferANGLE;
ptr_glTexImage3DOES                         optr_glTexImage3DOES;
ptr_glGetProgramBinaryOES                   optr_glGetProgramBinaryOES;
ptr_glProgramBinaryOES                      optr_glProgramBinaryOES;
ptr_glDrawBuffersEXT                        optr_glDrawBuffersEXT;
ptr_glGetProcAddress                        optr_glGetProcAddress;
ptr_glBindTexImage                          optr_glBindTexImage;
SetTraceFunctionPointers                    optr_SetTraceFunctionPointers;

bool __stdcall Initialize(void)
{
    char Root[MAX_PATH];
    //GetSystemDirectoryA(Root, MAX_PATH);
    #ifdef _MSC_VER
        strcat_s(Root, "C:/Users/Brandon/Desktop/libGLESv2.dll");
    #else
        strcat(Root, "C:/Users/Brandon/Desktop/libGLESv2.dll");
    #endif

    OriginalGLESV2 = new Library("C:/Users/Brandon/Desktop/libGLESv2.dll");
    MessageBox(NULL, "Hooked libGLESv2", "Hook", 0);

	try
	{
	    OriginalGLESV2->FunctionAddress(optr_glActiveTexture, "glActiveTexture");
        OriginalGLESV2->FunctionAddress(optr_glAttachShader, "glAttachShader");
        OriginalGLESV2->FunctionAddress(optr_glBindAttribLocation, "glBindAttribLocation");
        OriginalGLESV2->FunctionAddress(optr_glBindBuffer, "glBindBuffer");
        OriginalGLESV2->FunctionAddress(optr_glBindFramebuffer, "glBindFramebuffer");
        OriginalGLESV2->FunctionAddress(optr_glBindRenderbuffer, "glBindRenderbuffer");
        OriginalGLESV2->FunctionAddress(optr_glBindTexture, "glBindTexture");
        OriginalGLESV2->FunctionAddress(optr_glBlendColor, "glBlendColor");
        OriginalGLESV2->FunctionAddress(optr_glBlendEquation, "glBlendEquation");
        OriginalGLESV2->FunctionAddress(optr_glBlendEquationSeparate, "glBlendEquationSeparate");
        OriginalGLESV2->FunctionAddress(optr_glBlendFunc, "glBlendFunc");
        OriginalGLESV2->FunctionAddress(optr_glBlendFuncSeparate, "glBlendFuncSeparate");
        OriginalGLESV2->FunctionAddress(optr_glBufferData, "glBufferData");
        OriginalGLESV2->FunctionAddress(optr_glBufferSubData, "glBufferSubData");
        OriginalGLESV2->FunctionAddress(optr_glCheckFramebufferStatus, "glCheckFramebufferStatus");
        OriginalGLESV2->FunctionAddress(optr_glClear, "glClear");
        OriginalGLESV2->FunctionAddress(optr_glClearColor, "glClearColor");
        OriginalGLESV2->FunctionAddress(optr_glClearDepthf, "glClearDepthf");
        OriginalGLESV2->FunctionAddress(optr_glClearStencil, "glClearStencil");
        OriginalGLESV2->FunctionAddress(optr_glColorMask, "glColorMask");
        OriginalGLESV2->FunctionAddress(optr_glCompileShader, "glCompileShader");
        OriginalGLESV2->FunctionAddress(optr_glCompressedTexImage2D, "glCompressedTexImage2D");
        OriginalGLESV2->FunctionAddress(optr_glCompressedTexSubImage2D, "glCompressedTexSubImage2D");
        OriginalGLESV2->FunctionAddress(optr_glCopyTexImage2D, "glCopyTexImage2D");
        OriginalGLESV2->FunctionAddress(optr_glCopyTexSubImage2D, "glCopyTexSubImage2D");
        OriginalGLESV2->FunctionAddress(optr_glCreateProgram, "glCreateProgram");
        OriginalGLESV2->FunctionAddress(optr_glCreateShader, "glCreateShader");
        OriginalGLESV2->FunctionAddress(optr_glCullFace, "glCullFace");
        OriginalGLESV2->FunctionAddress(optr_glDeleteBuffers, "glDeleteBuffers");
        OriginalGLESV2->FunctionAddress(optr_glDeleteFramebuffers, "glDeleteFramebuffers");
        OriginalGLESV2->FunctionAddress(optr_glDeleteProgram, "glDeleteProgram");
        OriginalGLESV2->FunctionAddress(optr_glDeleteRenderbuffers, "glDeleteRenderbuffers");
        OriginalGLESV2->FunctionAddress(optr_glDeleteShader, "glDeleteShader");
        OriginalGLESV2->FunctionAddress(optr_glDeleteTextures, "glDeleteTextures");
        OriginalGLESV2->FunctionAddress(optr_glDepthFunc, "glDepthFunc");
        OriginalGLESV2->FunctionAddress(optr_glDepthMask, "glDepthMask");
        OriginalGLESV2->FunctionAddress(optr_glDepthRangef, "glDepthRangef");
        OriginalGLESV2->FunctionAddress(optr_glDetachShader, "glDetachShader");
        OriginalGLESV2->FunctionAddress(optr_glDisable, "glDisable");
        OriginalGLESV2->FunctionAddress(optr_glDisableVertexAttribArray, "glDisableVertexAttribArray");
        OriginalGLESV2->FunctionAddress(optr_glDrawArrays, "glDrawArrays");
        OriginalGLESV2->FunctionAddress(optr_glDrawElements, "glDrawElements");
        OriginalGLESV2->FunctionAddress(optr_glEnable, "glEnable");
        OriginalGLESV2->FunctionAddress(optr_glEnableVertexAttribArray, "glEnableVertexAttribArray");
        OriginalGLESV2->FunctionAddress(optr_glFinish, "glFinish");
        OriginalGLESV2->FunctionAddress(optr_glFlush, "glFlush");
        OriginalGLESV2->FunctionAddress(optr_glFramebufferRenderbuffer, "glFramebufferRenderbuffer");
        OriginalGLESV2->FunctionAddress(optr_glFramebufferTexture2D, "glFramebufferTexture2D");
        OriginalGLESV2->FunctionAddress(optr_glFrontFace, "glFrontFace");
        OriginalGLESV2->FunctionAddress(optr_glGenBuffers, "glGenBuffers");
        OriginalGLESV2->FunctionAddress(optr_glGenFramebuffers, "glGenFramebuffers");
        OriginalGLESV2->FunctionAddress(optr_glGenRenderbuffers, "glGenRenderbuffers");
        OriginalGLESV2->FunctionAddress(optr_glGenTextures, "glGenTextures");
        OriginalGLESV2->FunctionAddress(optr_glGenerateMipmap, "glGenerateMipmap");
        OriginalGLESV2->FunctionAddress(optr_glGetActiveAttrib, "glGetActiveAttrib");
        OriginalGLESV2->FunctionAddress(optr_glGetActiveUniform, "glGetActiveUniform");
        OriginalGLESV2->FunctionAddress(optr_glGetAttachedShaders, "glGetAttachedShaders");
        OriginalGLESV2->FunctionAddress(optr_glGetAttribLocation, "glGetAttribLocation");
        OriginalGLESV2->FunctionAddress(optr_glGetBooleanv, "glGetBooleanv");
        OriginalGLESV2->FunctionAddress(optr_glGetBufferParameteriv, "glGetBufferParameteriv");
        OriginalGLESV2->FunctionAddress(optr_glGetError, "glGetError");
        OriginalGLESV2->FunctionAddress(optr_glGetFloatv, "glGetFloatv");
        OriginalGLESV2->FunctionAddress(optr_glGetFramebufferAttachmentParameteriv, "glGetFramebufferAttachmentParameteriv");
        OriginalGLESV2->FunctionAddress(optr_glGetIntegerv, "glGetIntegerv");
        OriginalGLESV2->FunctionAddress(optr_glGetProgramInfoLog, "glGetProgramInfoLog");
        OriginalGLESV2->FunctionAddress(optr_glGetProgramiv, "glGetProgramiv");
        OriginalGLESV2->FunctionAddress(optr_glGetRenderbufferParameteriv, "glGetRenderbufferParameteriv");
        OriginalGLESV2->FunctionAddress(optr_glGetShaderInfoLog, "glGetShaderInfoLog");
        OriginalGLESV2->FunctionAddress(optr_glGetShaderPrecisionFormat, "glGetShaderPrecisionFormat");
        OriginalGLESV2->FunctionAddress(optr_glGetShaderSource, "glGetShaderSource");
        OriginalGLESV2->FunctionAddress(optr_glGetShaderiv, "glGetShaderiv");
        OriginalGLESV2->FunctionAddress(optr_glGetString, "glGetString");
        OriginalGLESV2->FunctionAddress(optr_glGetTexParameterfv, "glGetTexParameterfv");
        OriginalGLESV2->FunctionAddress(optr_glGetTexParameteriv, "glGetTexParameteriv");
        OriginalGLESV2->FunctionAddress(optr_glGetUniformLocation, "glGetUniformLocation");
        OriginalGLESV2->FunctionAddress(optr_glGetUniformfv, "glGetUniformfv");
        OriginalGLESV2->FunctionAddress(optr_glGetUniformiv, "glGetUniformiv");
        OriginalGLESV2->FunctionAddress(optr_glGetVertexAttribPointerv, "glGetVertexAttribPointerv");
        OriginalGLESV2->FunctionAddress(optr_glGetVertexAttribfv, "glGetVertexAttribfv");
        OriginalGLESV2->FunctionAddress(optr_glGetVertexAttribiv, "glGetVertexAttribiv");
        OriginalGLESV2->FunctionAddress(optr_glHint, "glHint");
        OriginalGLESV2->FunctionAddress(optr_glIsBuffer, "glIsBuffer");
        OriginalGLESV2->FunctionAddress(optr_glIsEnabled, "glIsEnabled");
        OriginalGLESV2->FunctionAddress(optr_glIsFramebuffer, "glIsFramebuffer");
        OriginalGLESV2->FunctionAddress(optr_glIsProgram, "glIsProgram");
        OriginalGLESV2->FunctionAddress(optr_glIsRenderbuffer, "glIsRenderbuffer");
        OriginalGLESV2->FunctionAddress(optr_glIsShader, "glIsShader");
        OriginalGLESV2->FunctionAddress(optr_glIsTexture, "glIsTexture");
        OriginalGLESV2->FunctionAddress(optr_glLineWidth, "glLineWidth");
        OriginalGLESV2->FunctionAddress(optr_glLinkProgram, "glLinkProgram");
        OriginalGLESV2->FunctionAddress(optr_glPixelStorei, "glPixelStorei");
        OriginalGLESV2->FunctionAddress(optr_glPolygonOffset, "glPolygonOffset");
        OriginalGLESV2->FunctionAddress(optr_glReadPixels, "glReadPixels");
        OriginalGLESV2->FunctionAddress(optr_glReleaseShaderCompiler, "glReleaseShaderCompiler");
        OriginalGLESV2->FunctionAddress(optr_glRenderbufferStorage, "glRenderbufferStorage");
        OriginalGLESV2->FunctionAddress(optr_glSampleCoverage, "glSampleCoverage");
        OriginalGLESV2->FunctionAddress(optr_glScissor, "glScissor");
        OriginalGLESV2->FunctionAddress(optr_glShaderBinary, "glShaderBinary");
        OriginalGLESV2->FunctionAddress(optr_glShaderSource, "glShaderSource");
        OriginalGLESV2->FunctionAddress(optr_glStencilFunc, "glStencilFunc");
        OriginalGLESV2->FunctionAddress(optr_glStencilFuncSeparate, "glStencilFuncSeparate");
        OriginalGLESV2->FunctionAddress(optr_glStencilMask, "glStencilMask");
        OriginalGLESV2->FunctionAddress(optr_glStencilMaskSeparate, "glStencilMaskSeparate");
        OriginalGLESV2->FunctionAddress(optr_glStencilOp, "glStencilOp");
        OriginalGLESV2->FunctionAddress(optr_glStencilOpSeparate, "glStencilOpSeparate");
        OriginalGLESV2->FunctionAddress(optr_glTexImage2D, "glTexImage2D");
        OriginalGLESV2->FunctionAddress(optr_glTexParameterf, "glTexParameterf");
        OriginalGLESV2->FunctionAddress(optr_glTexParameterfv, "glTexParameterfv");
        OriginalGLESV2->FunctionAddress(optr_glTexParameteri, "glTexParameteri");
        OriginalGLESV2->FunctionAddress(optr_glTexParameteriv, "glTexParameteriv");
        OriginalGLESV2->FunctionAddress(optr_glTexSubImage2D, "glTexSubImage2D");
        OriginalGLESV2->FunctionAddress(optr_glUniform1f, "glUniform1f");
        OriginalGLESV2->FunctionAddress(optr_glUniform1fv, "glUniform1fv");
        OriginalGLESV2->FunctionAddress(optr_glUniform1i, "glUniform1i");
        OriginalGLESV2->FunctionAddress(optr_glUniform1iv, "glUniform1iv");
        OriginalGLESV2->FunctionAddress(optr_glUniform2f, "glUniform2f");
        OriginalGLESV2->FunctionAddress(optr_glUniform2fv, "glUniform2fv");
        OriginalGLESV2->FunctionAddress(optr_glUniform2i, "glUniform2i");
        OriginalGLESV2->FunctionAddress(optr_glUniform2iv, "glUniform2iv");
        OriginalGLESV2->FunctionAddress(optr_glUniform3f, "glUniform3f");
        OriginalGLESV2->FunctionAddress(optr_glUniform3fv, "glUniform3fv");
        OriginalGLESV2->FunctionAddress(optr_glUniform3i, "glUniform3i");
        OriginalGLESV2->FunctionAddress(optr_glUniform3iv, "glUniform3iv");
        OriginalGLESV2->FunctionAddress(optr_glUniform4f, "glUniform4f");
        OriginalGLESV2->FunctionAddress(optr_glUniform4fv, "glUniform4fv");
        OriginalGLESV2->FunctionAddress(optr_glUniform4i, "glUniform4i");
        OriginalGLESV2->FunctionAddress(optr_glUniform4iv, "glUniform4iv");
        OriginalGLESV2->FunctionAddress(optr_glUniformMatrix2fv, "glUniformMatrix2fv");
        OriginalGLESV2->FunctionAddress(optr_glUniformMatrix3fv, "glUniformMatrix3fv");
        OriginalGLESV2->FunctionAddress(optr_glUniformMatrix4fv, "glUniformMatrix4fv");
        OriginalGLESV2->FunctionAddress(optr_glUseProgram, "glUseProgram");
        OriginalGLESV2->FunctionAddress(optr_glValidateProgram, "glValidateProgram");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib1f, "glVertexAttrib1f");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib1fv, "glVertexAttrib1fv");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib2f, "glVertexAttrib2f");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib2fv, "glVertexAttrib2fv");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib3f, "glVertexAttrib3f");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib3fv, "glVertexAttrib3fv");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib4f, "glVertexAttrib4f");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttrib4fv, "glVertexAttrib4fv");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttribPointer, "glVertexAttribPointer");
        OriginalGLESV2->FunctionAddress(optr_glViewport, "glViewport");
        OriginalGLESV2->FunctionAddress(optr_glTexImage3DOES, "glTexImage3DOES");
        OriginalGLESV2->FunctionAddress(optr_glBlitFramebufferANGLE, "glBlitFramebufferANGLE");
        OriginalGLESV2->FunctionAddress(optr_glRenderbufferStorageMultisampleANGLE, "glRenderbufferStorageMultisampleANGLE");
        OriginalGLESV2->FunctionAddress(optr_glDeleteFencesNV, "glDeleteFencesNV");
        OriginalGLESV2->FunctionAddress(optr_glFinishFenceNV, "glFinishFenceNV");
        OriginalGLESV2->FunctionAddress(optr_glGenFencesNV, "glGenFencesNV");
        OriginalGLESV2->FunctionAddress(optr_glGetFenceivNV, "glGetFenceivNV");
        OriginalGLESV2->FunctionAddress(optr_glIsFenceNV, "glIsFenceNV");
        OriginalGLESV2->FunctionAddress(optr_glSetFenceNV, "glSetFenceNV");
        OriginalGLESV2->FunctionAddress(optr_glTestFenceNV, "glTestFenceNV");
        OriginalGLESV2->FunctionAddress(optr_glGetTranslatedShaderSourceANGLE, "glGetTranslatedShaderSourceANGLE");
        OriginalGLESV2->FunctionAddress(optr_glTexStorage2DEXT, "glTexStorage2DEXT");
        OriginalGLESV2->FunctionAddress(optr_glGetGraphicsResetStatusEXT, "glGetGraphicsResetStatusEXT");
        OriginalGLESV2->FunctionAddress(optr_glReadnPixelsEXT, "glReadnPixelsEXT");
        OriginalGLESV2->FunctionAddress(optr_glGetnUniformfvEXT, "glGetnUniformfvEXT");
        OriginalGLESV2->FunctionAddress(optr_glGetnUniformivEXT, "glGetnUniformivEXT");
        OriginalGLESV2->FunctionAddress(optr_glGenQueriesEXT, "glGenQueriesEXT");
        OriginalGLESV2->FunctionAddress(optr_glDeleteQueriesEXT, "glDeleteQueriesEXT");
        OriginalGLESV2->FunctionAddress(optr_glIsQueryEXT, "glIsQueryEXT");
        OriginalGLESV2->FunctionAddress(optr_glBeginQueryEXT, "glBeginQueryEXT");
        OriginalGLESV2->FunctionAddress(optr_glEndQueryEXT, "glEndQueryEXT");
        OriginalGLESV2->FunctionAddress(optr_glGetQueryivEXT, "glGetQueryivEXT");
        OriginalGLESV2->FunctionAddress(optr_glGetQueryObjectuivEXT, "glGetQueryObjectuivEXT");
        OriginalGLESV2->FunctionAddress(optr_glVertexAttribDivisorANGLE, "glVertexAttribDivisorANGLE");
        OriginalGLESV2->FunctionAddress(optr_glDrawArraysInstancedANGLE, "glDrawArraysInstancedANGLE");
        OriginalGLESV2->FunctionAddress(optr_glDrawElementsInstancedANGLE, "glDrawElementsInstancedANGLE");
        OriginalGLESV2->FunctionAddress(optr_glProgramBinaryOES, "glProgramBinaryOES");
        OriginalGLESV2->FunctionAddress(optr_glGetProgramBinaryOES, "glGetProgramBinaryOES");
        OriginalGLESV2->FunctionAddress(optr_glDrawBuffersEXT, "glDrawBuffersEXT");
        OriginalGLESV2->FunctionAddress(optr_SetTraceFunctionPointers, "SetTraceFunctionPointers");
	}
	catch(std::exception &e)
	{
	    MessageBox(nullptr, e.what(), "ERROR - libGLESv2", 0);
		return false;
	}
	return true;
}

bool __stdcall DeInitialize(void)
{
	if (OriginalGLESV2)
	{
		delete OriginalGLESV2;
		OriginalGLESV2 = nullptr;
		return true;
	}
	return false;
}

void __stdcall Hook_glActiveTexture(GLenum texture)
{
	optr_glActiveTexture(texture);
}

void __stdcall Hook_glAttachShader(GLuint program, GLuint shader)
{
	optr_glAttachShader(program, shader);
}

void __stdcall Hook_glBeginQueryEXT(GLenum target, GLuint id)
{
	optr_glBeginQueryEXT(target, id);
}

void __stdcall Hook_glBindAttribLocation(GLuint program, GLuint index, const GLchar* name)
{
	optr_glBindAttribLocation(program, index, name);
}

void __stdcall Hook_glBindBuffer(GLenum target, GLuint buffer)
{
	optr_glBindBuffer(target, buffer);
}

void __stdcall Hook_glBindFramebuffer(GLenum target, GLuint framebuffer)
{
	optr_glBindFramebuffer(target, framebuffer);
}

void __stdcall Hook_glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
	optr_glBindRenderbuffer(target, renderbuffer);
}

void __stdcall Hook_glBindTexture(GLenum target, GLuint texture)
{
	optr_glBindTexture(target, texture);
}

void __stdcall Hook_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	optr_glBlendColor(red, green, blue, alpha);
}

void __stdcall Hook_glBlendEquation(GLenum mode)
{
	optr_glBlendEquation(mode);
}

void __stdcall Hook_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	optr_glBlendEquationSeparate(modeRGB, modeAlpha);
}

void __stdcall Hook_glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	optr_glBlendFunc(sfactor, dfactor);
}

void __stdcall Hook_glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	optr_glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void __stdcall Hook_glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
{
	optr_glBufferData(target, size, data, usage);
}

void __stdcall Hook_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
{
	optr_glBufferSubData(target, offset, size, data);
}

GLenum __stdcall Hook_glCheckFramebufferStatus(GLenum target)
{
    return optr_glCheckFramebufferStatus(target);
}

void __stdcall Hook_glClear(GLbitfield mask)
{
	optr_glClear(mask);
}

void __stdcall Hook_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	optr_glClearColor(red, green, blue, alpha);
}

void __stdcall Hook_glClearDepthf(GLclampf depth)
{
	optr_glClearDepthf(depth);
}

void __stdcall Hook_glClearStencil(GLint s)
{
	optr_glClearStencil(s);
}

void __stdcall Hook_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	optr_glColorMask(red, green, blue, alpha);
}

void __stdcall Hook_glCompileShader(GLuint shader)
{
	optr_glCompileShader(shader);
}

void __stdcall Hook_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data)
{
	optr_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void __stdcall Hook_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	optr_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void __stdcall Hook_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	optr_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void __stdcall Hook_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	optr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

GLuint __stdcall Hook_glCreateProgram(void)
{
	return optr_glCreateProgram();
}

GLuint __stdcall Hook_glCreateShader(GLenum type)
{
	return optr_glCreateShader(type);
}

void __stdcall Hook_glCullFace(GLenum mode)
{
	optr_glCullFace(mode);
}

void __stdcall Hook_glDeleteBuffers(GLsizei n, const GLuint* buffers)
{
	optr_glDeleteBuffers(n, buffers);
}

void __stdcall Hook_glDeleteFencesNV(GLsizei n, const GLuint* fences)
{
	optr_glDeleteFencesNV(n, fences);
}

void __stdcall Hook_glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers)
{
	optr_glDeleteFramebuffers(n, framebuffers);
}

void __stdcall Hook_glDeleteProgram(GLuint program)
{
	optr_glDeleteProgram(program);
}

void __stdcall Hook_glDeleteQueriesEXT(GLsizei n, const GLuint *ids)
{
	optr_glDeleteQueriesEXT(n, ids);
}

void __stdcall Hook_glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers)
{
	optr_glDeleteRenderbuffers(n, renderbuffers);
}

void __stdcall Hook_glDeleteShader(GLuint shader)
{
	optr_glDeleteShader(shader);
}

void __stdcall Hook_glDeleteTextures(GLsizei n, const GLuint* textures)
{
	optr_glDeleteTextures(n, textures);
}

void __stdcall Hook_glDepthFunc(GLenum func)
{
	optr_glDepthFunc(func);
}

void __stdcall Hook_glDepthMask(GLboolean flag)
{
	optr_glDepthMask(flag);
}

void __stdcall Hook_glDepthRangef(GLclampf zNear, GLclampf zFar)
{
	optr_glDepthRangef(zNear, zFar);
}

void __stdcall Hook_glDetachShader(GLuint program, GLuint shader)
{
	optr_glDetachShader(program, shader);
}

void __stdcall Hook_glDisable(GLenum cap)
{
	optr_glDisable(cap);
}

void __stdcall Hook_glDisableVertexAttribArray(GLuint index)
{
	optr_glDisableVertexAttribArray(index);
}

void __stdcall Hook_glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	optr_glDrawArrays(mode, first, count);
}

void __stdcall Hook_glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	optr_glDrawArraysInstancedANGLE(mode, first, count, primcount);
}

void __stdcall Hook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
	optr_glDrawElements(mode, count, type, indices);
}

void __stdcall Hook_glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
	optr_glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void __stdcall Hook_glEnable(GLenum cap)
{
	optr_glEnable(cap);
}

void __stdcall Hook_glEnableVertexAttribArray(GLuint index)
{
	optr_glEnableVertexAttribArray(index);
}

void __stdcall Hook_glEndQueryEXT(GLenum target)
{
	optr_glEndQueryEXT(target);
}

void __stdcall Hook_glFinishFenceNV(GLuint fence)
{
	optr_glFinishFenceNV(fence);
}

void __stdcall Hook_glFinish(void)
{
	optr_glFinish();
}

void __stdcall Hook_glFlush(void)
{
	optr_glFlush();
}

void __stdcall Hook_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	optr_glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void __stdcall Hook_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	optr_glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

void __stdcall Hook_glFrontFace(GLenum mode)
{
	optr_glFrontFace(mode);
}

void __stdcall Hook_glGenBuffers(GLsizei n, GLuint* buffers)
{
	optr_glGenBuffers(n, buffers);
}

void __stdcall Hook_glGenerateMipmap(GLenum target)
{
	optr_glGenerateMipmap(target);
}

void __stdcall Hook_glGenFencesNV(GLsizei n, GLuint* fences)
{
	optr_glGenFencesNV(n, fences);
}

void __stdcall Hook_glGenFramebuffers(GLsizei n, GLuint* framebuffers)
{
	optr_glGenFramebuffers(n, framebuffers);
}

void __stdcall Hook_glGenQueriesEXT(GLsizei n, GLuint* ids)
{
	optr_glGenQueriesEXT(n, ids);
}

void __stdcall Hook_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers)
{
	optr_glGenRenderbuffers(n, renderbuffers);
}

void __stdcall Hook_glGenTextures(GLsizei n, GLuint* textures)
{
	optr_glGenTextures(n, textures);
}

void __stdcall Hook_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
	optr_glGetActiveAttrib(program, index, bufsize, length, size, type, name);
}

void __stdcall Hook_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
	optr_glGetActiveUniform(program, index, bufsize, length, size, type, name);
}

void __stdcall Hook_glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders)
{
	optr_glGetAttachedShaders(program, maxcount, count, shaders);
}

int __stdcall Hook_glGetAttribLocation(GLuint program, const GLchar* name)
{
	return optr_glGetAttribLocation(program, name);
}

void __stdcall Hook_glGetBooleanv(GLenum pname, GLboolean* params)
{
	optr_glGetBooleanv(pname, params);
}

void __stdcall Hook_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	optr_glGetBufferParameteriv(target, pname, params);
}

GLenum __stdcall Hook_glGetError(void)
{
	return optr_glGetError();
}

void __stdcall Hook_glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
{
	optr_glGetFenceivNV(fence, pname, params);
}

void __stdcall Hook_glGetFloatv(GLenum pname, GLfloat* params)
{
	optr_glGetFloatv(pname, params);
}

void __stdcall Hook_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
	optr_glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

GLenum __stdcall Hook_glGetGraphicsResetStatusEXT(void)
{
	return optr_glGetGraphicsResetStatusEXT();
}

void __stdcall Hook_glGetIntegerv(GLenum pname, GLint* params)
{
	optr_glGetIntegerv(pname, params);
}

void __stdcall Hook_glGetProgramiv(GLuint program, GLenum pname, GLint* params)
{
	optr_glGetProgramiv(program, pname, params);
}

void __stdcall Hook_glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
	optr_glGetProgramInfoLog(program, bufsize, length, infolog);
}

void __stdcall Hook_glGetQueryivEXT(GLenum target, GLenum pname, GLint *params)
{
	optr_glGetQueryivEXT(target, pname, params);
}

void __stdcall Hook_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params)
{
	optr_glGetQueryObjectuivEXT(id, pname, params);
}

void __stdcall Hook_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	optr_glGetRenderbufferParameteriv(target, pname, params);
}

void __stdcall Hook_glGetShaderiv(GLuint shader, GLenum pname, GLint* params)
{
	optr_glGetShaderiv(shader, pname, params);
}

void __stdcall Hook_glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog)
{
	optr_glGetShaderInfoLog(shader, bufsize, length, infolog);
}

void __stdcall Hook_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision)
{
	optr_glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void __stdcall Hook_glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
	optr_glGetShaderSource(shader, bufsize, length, source);
}

void __stdcall Hook_glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
	optr_glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

const GLubyte* __stdcall Hook_glGetString(GLenum name)
{
	return optr_glGetString(name);
}

void __stdcall Hook_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
	optr_glGetTexParameterfv(target, pname, params);
}

void __stdcall Hook_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
	optr_glGetTexParameteriv(target, pname, params);
}

void __stdcall Hook_glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat* params)
{
	optr_glGetnUniformfvEXT(program, location, bufSize, params);
}

void __stdcall Hook_glGetUniformfv(GLuint program, GLint location, GLfloat* params)
{
	optr_glGetUniformfv(program, location, params);
}

void __stdcall Hook_glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint* params)
{
	optr_glGetnUniformivEXT(program, location, bufSize, params);
}

void __stdcall Hook_glGetUniformiv(GLuint program, GLint location, GLint* params)
{
	optr_glGetUniformiv(program, location, params);
}

int __stdcall Hook_glGetUniformLocation(GLuint program, const GLchar* name)
{
	return optr_glGetUniformLocation(program, name);
}

void __stdcall Hook_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params)
{
	optr_glGetVertexAttribfv(index, pname, params);
}

void __stdcall Hook_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params)
{
	optr_glGetVertexAttribiv(index, pname, params);
}

void __stdcall Hook_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer)
{
	optr_glGetVertexAttribPointerv(index, pname, pointer);
}

void __stdcall Hook_glHint(GLenum target, GLenum mode)
{
	optr_glHint(target, mode);
}

GLboolean __stdcall Hook_glIsBuffer(GLuint buffer)
{
	return optr_glIsBuffer(buffer);
}

GLboolean __stdcall Hook_glIsEnabled(GLenum cap)
{
	return optr_glIsEnabled(cap);
}

GLboolean __stdcall Hook_glIsFenceNV(GLuint fence)
{
	return optr_glIsFenceNV(fence);
}

GLboolean __stdcall Hook_glIsFramebuffer(GLuint framebuffer)
{
	return optr_glIsFramebuffer(framebuffer);
}

GLboolean __stdcall Hook_glIsProgram(GLuint program)
{
	return optr_glIsProgram(program);
}

GLboolean __stdcall Hook_glIsQueryEXT(GLuint id)
{
	return optr_glIsQueryEXT(id);
}

GLboolean __stdcall Hook_glIsRenderbuffer(GLuint renderbuffer)
{
	return optr_glIsRenderbuffer(renderbuffer);
}

GLboolean __stdcall Hook_glIsShader(GLuint shader)
{
	return optr_glIsShader(shader);
}

GLboolean __stdcall Hook_glIsTexture(GLuint texture)
{
	return optr_glIsTexture(texture);
}

void __stdcall Hook_glLineWidth(GLfloat width)
{
	optr_glLineWidth(width);
}

void __stdcall Hook_glLinkProgram(GLuint program)
{
	optr_glLinkProgram(program);
}

void __stdcall Hook_glPixelStorei(GLenum pname, GLint param)
{
	optr_glPixelStorei(pname, param);
}

void __stdcall Hook_glPolygonOffset(GLfloat factor, GLfloat units)
{
	optr_glPolygonOffset(factor, units);
}

void __stdcall Hook_glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data)
{
	optr_glReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void __stdcall Hook_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
	optr_glReadPixels(x, y, width, height, format, type, pixels);
}

void __stdcall Hook_glReleaseShaderCompiler(void)
{
	optr_glReleaseShaderCompiler();
}

void __stdcall Hook_glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	optr_glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void __stdcall Hook_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	optr_glRenderbufferStorage(target, internalformat, width, height);
}

void __stdcall Hook_glSampleCoverage(GLclampf value, GLboolean invert)
{
	optr_glSampleCoverage(value, invert);
}

void __stdcall Hook_glSetFenceNV(GLuint fence, GLenum condition)
{
	optr_glSetFenceNV(fence, condition);
}

void __stdcall Hook_glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	optr_glScissor(x, y, width, height);
}

void __stdcall Hook_glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length)
{
	optr_glShaderBinary(n, shaders, binaryformat, binary, length);
}

void __stdcall Hook_glShaderSource(GLuint shader, GLsizei count, const GLchar** string, const GLint* length)
{
	optr_glShaderSource(shader, count, string, length);
}

void __stdcall Hook_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	optr_glStencilFunc(func, ref, mask);
}

void __stdcall Hook_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
	optr_glStencilFuncSeparate(face, func, ref, mask);
}

void __stdcall Hook_glStencilMask(GLuint mask)
{
	optr_glStencilMask(mask);
}

void __stdcall Hook_glStencilMaskSeparate(GLenum face, GLuint mask)
{
	optr_glStencilMaskSeparate(face, mask);
}

void __stdcall Hook_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	optr_glStencilOp(fail, zfail, zpass);
}

void __stdcall Hook_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
{
	optr_glStencilOpSeparate(face, fail, zfail, zpass);
}

GLboolean __stdcall Hook_glTestFenceNV(GLuint fence)
{
	return optr_glTestFenceNV(fence);
}

void __stdcall Hook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	optr_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void __stdcall Hook_glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	optr_glTexParameterf(target, pname, param);
}

void __stdcall Hook_glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
	optr_glTexParameterfv(target, pname, params);
}

void __stdcall Hook_glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	optr_glTexParameteri(target, pname, param);
}

void __stdcall Hook_glTexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
	optr_glTexParameteriv(target, pname, params);
}

void __stdcall Hook_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	optr_glTexStorage2DEXT(target, levels, internalformat, width, height);
}

void __stdcall Hook_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	optr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void __stdcall Hook_glUniform1f(GLint location, GLfloat x)
{
	optr_glUniform1f(location, x);
}

void __stdcall Hook_glUniform1fv(GLint location, GLsizei count, const GLfloat* v)
{
	optr_glUniform1fv(location, count, v);
}

void __stdcall Hook_glUniform1i(GLint location, GLint x)
{
	optr_glUniform1i(location, x);
}

void __stdcall Hook_glUniform1iv(GLint location, GLsizei count, const GLint* v)
{
	optr_glUniform1iv(location, count, v);
}

void __stdcall Hook_glUniform2f(GLint location, GLfloat x, GLfloat y)
{
	optr_glUniform2f(location, x, y);
}

void __stdcall Hook_glUniform2fv(GLint location, GLsizei count, const GLfloat* v)
{
	optr_glUniform2fv(location, count, v);
}

void __stdcall Hook_glUniform2i(GLint location, GLint x, GLint y)
{
	optr_glUniform2i(location, x, y);
}

void __stdcall Hook_glUniform2iv(GLint location, GLsizei count, const GLint* v)
{
	optr_glUniform2iv(location, count, v);
}

void __stdcall Hook_glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z)
{
	optr_glUniform3f(location, x, y, z);
}

void __stdcall Hook_glUniform3fv(GLint location, GLsizei count, const GLfloat* v)
{
	optr_glUniform3fv(location, count, v);
}

void __stdcall Hook_glUniform3i(GLint location, GLint x, GLint y, GLint z)
{
	optr_glUniform3i(location, x, y, z);
}

void __stdcall Hook_glUniform3iv(GLint location, GLsizei count, const GLint* v)
{
	optr_glUniform3iv(location, count, v);
}

void __stdcall Hook_glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	optr_glUniform4f(location, x, y, z, w);
}

void __stdcall Hook_glUniform4fv(GLint location, GLsizei count, const GLfloat* v)
{
	optr_glUniform4fv(location, count, v);
}

void __stdcall Hook_glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w)
{
	optr_glUniform4i(location, x, y, z, w);
}

void __stdcall Hook_glUniform4iv(GLint location, GLsizei count, const GLint* v)
{
	optr_glUniform4iv(location, count, v);
}

void __stdcall Hook_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	optr_glUniformMatrix2fv(location, count, transpose, value);
}

void __stdcall Hook_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	optr_glUniformMatrix3fv(location, count, transpose, value);
}

void __stdcall Hook_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	optr_glUniformMatrix4fv(location, count, transpose, value);
}

void __stdcall Hook_glUseProgram(GLuint program)
{
	optr_glUseProgram(program);
}

void __stdcall Hook_glValidateProgram(GLuint program)
{
	optr_glValidateProgram(program);
}

void __stdcall Hook_glVertexAttrib1f(GLuint index, GLfloat x)
{
	optr_glVertexAttrib1f(index, x);
}

void __stdcall Hook_glVertexAttrib1fv(GLuint index, const GLfloat* values)
{
	optr_glVertexAttrib1fv(index, values);
}

void __stdcall Hook_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	optr_glVertexAttrib2f(index, x, y);
}

void __stdcall Hook_glVertexAttrib2fv(GLuint index, const GLfloat* values)
{
	optr_glVertexAttrib2fv(index, values);
}

void __stdcall Hook_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	optr_glVertexAttrib3f(index, x, y, z);
}

void __stdcall Hook_glVertexAttrib3fv(GLuint index, const GLfloat* values)
{
	optr_glVertexAttrib3fv(index, values);
}

void __stdcall Hook_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	optr_glVertexAttrib4f(index, x, y, z, w);
}

void __stdcall Hook_glVertexAttrib4fv(GLuint index, const GLfloat* values)
{
	optr_glVertexAttrib4fv(index, values);
}

void __stdcall Hook_glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
	optr_glVertexAttribDivisorANGLE(index, divisor);
}

void __stdcall Hook_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr)
{
	optr_glVertexAttribPointer(index, size, type, normalized, stride, ptr);
}

void __stdcall Hook_glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	optr_glViewport(x, y, width, height);
}

void __stdcall Hook_glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	optr_glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void __stdcall Hook_glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	optr_glTexImage3DOES(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

void __stdcall Hook_glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary)
{
	optr_glGetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void __stdcall Hook_glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void *binary, GLint length)
{
	optr_glProgramBinaryOES(program, binaryFormat, binary, length);
}

void __stdcall Hook_glDrawBuffersEXT(GLsizei n, const GLenum *bufs)
{
	optr_glDrawBuffersEXT(n, bufs);
}

__eglMustCastToProperFunctionPointerType __stdcall Hook_glGetProcAddress(const char *procname)
{
	return optr_glGetProcAddress(procname);
}

bool __stdcall Hook_glBindTexImage(egl::Surface *surface)
{
	return optr_glBindTexImage(surface);
}

void __stdcall Hook_SetTraceFunctionPointers(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func)
{
    optr_SetTraceFunctionPointers(get_category_enabled_flag, add_trace_event_func);
}
