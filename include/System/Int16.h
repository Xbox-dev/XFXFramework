/*****************************************************************************
 *	Int16.h																	 *
 *																			 *
 *	XFX System::Int16 definition file										 *
 *	Copyright (c) XFX Team. All Rights Reserved 							 *
 *****************************************************************************/
#ifndef _SYSTEM_INT16_
#define _SYSTEM_INT16_

#include <System/Interfaces.h>

namespace System
{
	class String;

	// Represents a signed, 16-bit integer.
	struct Int16 : IComparable<Int16>, IEquatable<Int16>, Object
	{
	private:
		short value;

	public:
		static const short MaxValue;
		static const short MinValue;

		Int16();
		Int16(const Int16 &obj);
		Int16(const short &obj);

		int CompareTo(const Int16 other) const;
		bool Equals(Object const * const obj) const;
		bool Equals(const Int16 other) const;
		int GetHashCode() const;
		static Type GetType();
		const String ToString() const;
		static String ToString(const short value);
		static bool TryParse(const String& str, out short* result);

		operator short() const;
		bool operator==(const Int16& right) const;
		bool operator!=(const Int16& right) const;
	};
}

#endif //_SYSTEM_INT16_
