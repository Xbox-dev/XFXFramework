/********************************************************
 *	VertexElement.h										*
 *														*
 *	XFX VertexElement definition file					*
 *	Copyright � XFX Team. All Rights Reserved			*
 ********************************************************/
#ifndef _XFX_GRAPHICS_VERTEXELEMENT_
#define _XFX_GRAPHICS_VERTEXELEMENT_

#include <System/Types.h>
#include <Graphics/Enums.h>

using namespace System;

namespace XFX
{
	namespace Graphics
	{
		/// <summary>
		/// Defines input vertex data to the pipeline.
		/// </summary>
		struct VertexElement
		{
		public:
			short Offset;
			short Stream;
			byte UsageIndex;
			VertexElementFormat_t VertexElementFormat_;
			VertexElementMethod_t VertexElementMethod_;
			VertexElementUsage_t VertexElementUsage_;
		
			VertexElement(short stream, short offset, VertexElementFormat_t elementFormat, VertexElementMethod_t elementMethod, VertexElementUsage_t elementUsage, byte usageIndex);
		
			int Equals(const VertexElement other);
			int GetHashCode();
		
			int operator!=(const VertexElement other);
			int operator==(const VertexElement other);
		};
	}
}

#endif //_XFX_GRAPHICS_VERTEXELEMENT_