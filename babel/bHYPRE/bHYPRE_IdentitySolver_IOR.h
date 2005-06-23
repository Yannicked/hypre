/*
 * File:          bHYPRE_IdentitySolver_IOR.h
 * Symbol:        bHYPRE.IdentitySolver-v1.0.0
 * Symbol Type:   class
 * Babel Version: 0.9.8
 * Description:   Intermediate Object Representation for bHYPRE.IdentitySolver
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.9.8
 */

#ifndef included_bHYPRE_IdentitySolver_IOR_h
#define included_bHYPRE_IdentitySolver_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_bHYPRE_Operator_IOR_h
#include "bHYPRE_Operator_IOR.h"
#endif
#ifndef included_bHYPRE_Solver_IOR_h
#include "bHYPRE_Solver_IOR.h"
#endif
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "bHYPRE.IdentitySolver" (version 1.0.0)
 * 
 * Identity solver, just solves an identity matrix, for when you don't really
 * want a preconditioner
 * 
 * Objects of this type can be cast to Solver objects using the
 * {\tt \_\_cast} methods.
 * 
 */

struct bHYPRE_IdentitySolver__array;
struct bHYPRE_IdentitySolver__object;

extern struct bHYPRE_IdentitySolver__object*
bHYPRE_IdentitySolver__new(void);

extern struct bHYPRE_IdentitySolver__object*
bHYPRE_IdentitySolver__remote(const char *url);

extern void bHYPRE_IdentitySolver__init(
  struct bHYPRE_IdentitySolver__object* self);
extern void bHYPRE_IdentitySolver__fini(
  struct bHYPRE_IdentitySolver__object* self);
extern void bHYPRE_IdentitySolver__IOR_version(int32_t *major, int32_t *minor);

/*
 * Forward references for external classes and interfaces.
 */

struct bHYPRE_Vector__array;
struct bHYPRE_Vector__object;
struct sidl_BaseInterface__array;
struct sidl_BaseInterface__object;
struct sidl_ClassInfo__array;
struct sidl_ClassInfo__object;

/*
 * Declare the method entry point vector.
 */

struct bHYPRE_IdentitySolver__epv {
  /* Implicit builtin methods */
  void* (*f__cast)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name);
  void (*f__delete)(
    struct bHYPRE_IdentitySolver__object* self);
  void (*f__ctor)(
    struct bHYPRE_IdentitySolver__object* self);
  void (*f__dtor)(
    struct bHYPRE_IdentitySolver__object* self);
  /* Methods introduced in sidl.BaseInterface-v0.9.0 */
  void (*f_addRef)(
    struct bHYPRE_IdentitySolver__object* self);
  void (*f_deleteRef)(
    struct bHYPRE_IdentitySolver__object* self);
  sidl_bool (*f_isSame)(
    struct bHYPRE_IdentitySolver__object* self,
    struct sidl_BaseInterface__object* iobj);
  struct sidl_BaseInterface__object* (*f_queryInt)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name);
  sidl_bool (*f_isType)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    struct bHYPRE_IdentitySolver__object* self);
  /* Methods introduced in sidl.BaseClass-v0.9.0 */
  /* Methods introduced in bHYPRE.Operator-v1.0.0 */
  int32_t (*f_SetCommunicator)(
    struct bHYPRE_IdentitySolver__object* self,
    void* mpi_comm);
  int32_t (*f_SetIntParameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    int32_t value);
  int32_t (*f_SetDoubleParameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    double value);
  int32_t (*f_SetStringParameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    const char* value);
  int32_t (*f_SetIntArray1Parameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    struct sidl_int__array* value);
  int32_t (*f_SetIntArray2Parameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    struct sidl_int__array* value);
  int32_t (*f_SetDoubleArray1Parameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    struct sidl_double__array* value);
  int32_t (*f_SetDoubleArray2Parameter)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    struct sidl_double__array* value);
  int32_t (*f_GetIntValue)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    int32_t* value);
  int32_t (*f_GetDoubleValue)(
    struct bHYPRE_IdentitySolver__object* self,
    const char* name,
    double* value);
  int32_t (*f_Setup)(
    struct bHYPRE_IdentitySolver__object* self,
    struct bHYPRE_Vector__object* b,
    struct bHYPRE_Vector__object* x);
  int32_t (*f_Apply)(
    struct bHYPRE_IdentitySolver__object* self,
    struct bHYPRE_Vector__object* b,
    struct bHYPRE_Vector__object** x);
  /* Methods introduced in bHYPRE.Solver-v1.0.0 */
  int32_t (*f_SetOperator)(
    struct bHYPRE_IdentitySolver__object* self,
    struct bHYPRE_Operator__object* A);
  int32_t (*f_SetTolerance)(
    struct bHYPRE_IdentitySolver__object* self,
    double tolerance);
  int32_t (*f_SetMaxIterations)(
    struct bHYPRE_IdentitySolver__object* self,
    int32_t max_iterations);
  int32_t (*f_SetLogging)(
    struct bHYPRE_IdentitySolver__object* self,
    int32_t level);
  int32_t (*f_SetPrintLevel)(
    struct bHYPRE_IdentitySolver__object* self,
    int32_t level);
  int32_t (*f_GetNumIterations)(
    struct bHYPRE_IdentitySolver__object* self,
    int32_t* num_iterations);
  int32_t (*f_GetRelResidualNorm)(
    struct bHYPRE_IdentitySolver__object* self,
    double* norm);
  /* Methods introduced in bHYPRE.IdentitySolver-v1.0.0 */
};

/*
 * Define the class object structure.
 */

struct bHYPRE_IdentitySolver__object {
  struct sidl_BaseClass__object      d_sidl_baseclass;
  struct bHYPRE_Operator__object     d_bhypre_operator;
  struct bHYPRE_Solver__object       d_bhypre_solver;
  struct bHYPRE_IdentitySolver__epv* d_epv;
  void*                              d_data;
};

struct bHYPRE_IdentitySolver__external {
  struct bHYPRE_IdentitySolver__object*
  (*createObject)(void);

  struct bHYPRE_IdentitySolver__object*
  (*createRemote)(const char *url);

struct sidl_BaseClass__epv*(*getSuperEPV)(void);};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct bHYPRE_IdentitySolver__external*
bHYPRE_IdentitySolver__externals(void);

#ifdef __cplusplus
}
#endif
#endif