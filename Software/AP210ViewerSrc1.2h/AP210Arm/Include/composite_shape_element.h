#ifndef COMPOSITE_SHAPE_ELEMENT_H
#define COMPOSITE_SHAPE_ELEMENT_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <shape_element.h>

// Unions

// Enumerations

class AP210ARM_API composite_shape_element:
public shape_element
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 349};

   private:
      // Required attributes

      // Optional attributes

   protected:
      composite_shape_element();

   public:
      ~composite_shape_element();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static composite_shape_element *InstanceOf(ARMObject *);
      static composite_shape_element *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static composite_shape_element *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
