/*-****************************************************************************

 * Copyright (C) 2011 Vasco Silva - <vasco.silva@caixamagica.pt>
 *
 * Licensed under the EUPL V.1.2

****************************************************************************-*/



#ifndef WIN32_H
#define WIN32_H

#define CK_PTR *

#define CK_DEFINE_FUNCTION(returnType, name) \
   returnType __declspec(dllexport) name

#define CK_DECLARE_FUNCTION(returnType, name) \
   returnType __declspec(dllexport) name

#define CK_DECLARE_FUNCTION_POINTER(returnType, name) \
   returnType __declspec(dllimport) (* name)

#define CK_CALLBACK_FUNCTION(returnType, name) \
   returnType (* name)

#ifndef NULL_PTR
#define NULL_PTR 0
#endif

#endif
