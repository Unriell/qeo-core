/*
 * Copyright (c) 2015 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/* typeobj.h -- The following describes the TypeObject type and those nested
		types on which it depends. */  
    
#ifndef __typeobj_h_
#define __typeobj_h_
    
#include <stdint.h>
#include <wchar.h>




/*All of the kinds of types that exist in the type system. */ 
    typedef enum { 
	    BOOLEAN_TYPE, 
	
	
	
	
	
} TypeKind;

/* The name of some element (e.g. type, type member, module) */ 
#define ELEMENT_NAME_MAX_LENGTH	256
    
/* Every type has an ID. Those of the primitive types are pre-defined. */ 
typedef struct type_st *TypeId;

#define NO_TYPE_ID	  NO_TYPE;
#define BOOLEAN_TYPE_ID	  BOOLEAN_TYPE;
#define BYTE_TYPE_ID	  BYTE_TYPE;
#define INT_16_TYPE_ID	  INT_16_TYPE;
#define UINT_16_TYPE_ID	  UINT_16_TYPE;
#define INT_32_TYPE_ID	  INT_32_TYPE;
#define UINT_32_TYPE_ID	  UINT_32_TYPE;
#define INT_64_TYPE_ID	  INT_64_TYPE;
#define UINT_64_TYPE_ID	  UINT_64_TYPE;
#define FLOAT_32_TYPE_ID  FLOAT_32_TYPE;
#define FLOAT_64_TYPE_ID  FLOAT_64_TYPE;
#define FLOAT_128_TYPE_ID FLOAT_128_TYPE;
#define CHAR_8_TYPE_ID	  CHAR_8_TYPE;
#define CHAR_32_TYPE_ID	  CHAR_32_TYPE;
    
/* Literal value of an annotation member: either the default value in its
 * definition or the value applied in its usage.
 */ 
    typedef struct {
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	


/* The assignment of a value to a member of an annotation. */ 
    typedef struct annotation_usage_member_st {
	
	


/* The application of an annotation to some type or type member. */ 
typedef struct annotation_usage_st AnnotationUsage;

	
	
	
	


/* Type base class: */ 
    typedef struct type_st {
	
	
	
	
	
	
	


/* Aggregations: */ 
    
/* Member of an aggregation type: */ 
    typedef struct member_st {
	
	
	
	
	
	
	
	


	
	
	
	


/* Member of a union type: */ 
    typedef struct union_member_st {
	
	
	
		
		
	


	
	
	
	


	
	


	
	
	
	


/* Alias: */ 
    typedef struct alias_type_st {
	
	


/* Collections: */ 
typedef uint32_t Bound;		/* Bound of a collection type. */

#define UNBOUNDED_COLLECTION	0
    
/* Base type for collection types: */ 
    typedef struct collection_type_st {
	
	
	


/* Array: */ 
    typedef struct array_type_st {
	
	
	


/* Map: */ 
    typedef struct map_type_st {
	
	
	


/* Sequence: */ 
    typedef struct sequence_type_st {
	
	


/* String: */ 
    typedef struct string_type_st {
	
	


/* Bitset: */ 
    typedef struct bit_st {	/* Individual bit in a bit set. */
	
	


	
	
	
	


/* Enumeration: */ 
    typedef struct enum_const_st {
	
	


/* Enumeration type: */ 
    typedef struct enumeration_type_st {
	
	
	
	


/* Module: */ 
typedef struct module_st Module;

/* Type library: */ 
/* All of the kinds of definitions that can exist in a type library. */ 
typedef enum { 
	    ANNOTATION_TYPE, 
	    ARRAY_TYPE, 
	    BITSET_TYPE, 
	    ENUMERATION_TYPE, 
	    MAP_TYPE, 
	    SEQUENCE_TYPE, 
	    STRING_TYPE, 
	    STRUCTURE_TYPE, 
} TypeLibElemKind;

/* Element that can appear in a type library or module: a type or module. */ 
    typedef struct type_library_element_st {
	
	
		
		
		
		
		
		
		
		
		
		
		
	


	
	


	
	


	
	


	
	


	
	


	
	


	
	
	
	
	
	



	
	


    { 
	
} LiteralKind;

	
	


	
	
	


	
	
	
	
	


#endif	/* __typeobj_h_ */