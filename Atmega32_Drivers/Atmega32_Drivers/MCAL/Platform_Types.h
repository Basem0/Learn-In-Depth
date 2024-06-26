/*
 * Platform_Types.h
 *
 * Created: 6/28/2024 12:33:40 AM
 *  Author: ahmed
 */ 


#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

// Unsigned integer data types
typedef unsigned char               uint8;
typedef unsigned short              uint16;
typedef unsigned int                uint32;
typedef unsigned long long int      uint64;

// Signed integer data types
typedef signed char                 sint8;
typedef signed short                sint16;
typedef signed int                  sint32;
typedef signed long long int        sint64;

// volatile unsigned integer data types
typedef volatile unsigned char              vuint8_t;
typedef volatile unsigned short             vuint16_t;
typedef volatile unsigned int               vuint32_t;
typedef volatile unsigned long long int     vuint64_t;

// volatile signed integer data types
typedef volatile signed char                vsint8_t;
typedef volatile signed short               vsint16_t;
typedef volatile signed int                 vsint32_t;
typedef volatile signed long long int       vsint64_t;

// Float data types
typedef float       float32_t;
typedef double      float64_t;

// Boolean date types
typedef enum
{
	false,
	ture,
}bool;

// Error types
typedef enum
{
	InvalidArgument,
	OverFlow            
}ErrorType;

#define NULL ((void *)0)

#endif /* PLATFORM_TYPES_H_ */