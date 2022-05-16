#ifndef FEATURE_GROUP_RELATIONSHIP_H
#define FEATURE_GROUP_RELATIONSHIP_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <managed_design_object.h>

// Unions

// Enumerations

class AP210ARM_API feature_group_relationship:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 544};

   private:
      // Required attributes
      class part_group_feature *_relating_feature;
      class part_feature *_related_feature[2000];

      // Optional attributes

   protected:
      feature_group_relationship();

   public:
      ~feature_group_relationship();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static feature_group_relationship *InstanceOf(ARMObject *);
      static feature_group_relationship *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static feature_group_relationship *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
