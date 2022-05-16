// Source for AP210 application object
//     axis_placement_2d

// Precompiled include files
#include <StdAfx.h>

#include "axis_placement_2d.h"

// Classes

axis_placement_2d::axis_placement_2d() {
   initialize();
   }
axis_placement_2d::~axis_placement_2d() {
   // Free string attributes
   }
// intialize data members
void axis_placement_2d::initialize() {
   // Required attributes

   // Optional attributes
   }
// Runtime type identification
int axis_placement_2d::DynamicType(int ID) {
   int result = 0;

   if (ID == typeID) {;
      result = 1;
      }
   // Check supertypes for dynamic type
   if (result == 0) {
      result = axis_placement::DynamicType(ID);
      }
   return result;
   }
axis_placement_2d *axis_placement_2d::InstanceOf(ARMObject *s) {
   if (s->getTypeID() == typeID) {
      return dynamic_cast<axis_placement_2d *>(s);
      }
   return NULL;
   }
axis_placement_2d *axis_placement_2d::KindOf(ARMObject * s) {
   if (s->DynamicType(typeID)) {
      return dynamic_cast<axis_placement_2d *>(s);
      }
   return NULL;
   }
// construction factory
axis_placement_2d *axis_placement_2d::Construct() {
   axis_placement_2d *result = NULL;

   // create the axis_placement_2d.
   result = new axis_placement_2d();
   return result;
   }
bool axis_placement_2d::hasRequiredAttributes() {
   bool result = true;

   TRACE("Checking for required attributes for: axis_placement_2d\r\n");

   // Check for the existence of all required attributes
   // Check supertypes for the existence of all required attributes
   if (axis_placement::hasRequiredAttributes() == false) {
      result = false;
      }
   return(result);
   }
