// 
// File:          sidl_rmi_UnexpectedCloseException.hxx
// Symbol:        sidl.rmi.UnexpectedCloseException-v0.9.15
// Symbol Type:   class
// Babel Version: 1.0.0
// Release:       $Name$
// Revision:      @(#) $Id$
// Description:   Client-side glue code for sidl.rmi.UnexpectedCloseException
// 
// Copyright (c) 2000-2002, The Regents of the University of California.
// Produced at the Lawrence Livermore National Laboratory.
// Written by the Components Team <components@llnl.gov>
// All rights reserved.
// 
// This file is part of Babel. For more information, see
// http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
// for Our Notice and the LICENSE file for the GNU Lesser General Public
// License.
// 
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License (as published by
// the Free Software Foundation) version 2.1 dated February 1999.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
// conditions of the GNU Lesser General Public License for more details.
// 
// You should have recieved a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_sidl_rmi_UnexpectedCloseException_hxx
#define included_sidl_rmi_UnexpectedCloseException_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
// declare class before main #includes
// (this alleviates circular #include guard problems)[BUG#393]
namespace sidl { 
  namespace rmi { 

    class UnexpectedCloseException;
  } // end namespace rmi
} // end namespace sidl

// Some compilers need to define array template before the specializations
namespace sidl {
  template<>
  class array< ::sidl::rmi::UnexpectedCloseException >;
}
#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_sidl_rmi_UnexpectedCloseException_IOR_h
#include "sidl_rmi_UnexpectedCloseException_IOR.h"
#endif
#ifndef included_sidl_rmi_NetworkException_hxx
#include "sidl_rmi_NetworkException.hxx"
#endif
namespace sidl {
  namespace rmi {
    class Call;
    class Return;
    class Ticket;
  }
  namespace rmi {
    class InstanceHandle;
  }
}
namespace sidl { 
  namespace rmi { 

    /**
     * Symbol "sidl.rmi.UnexpectedCloseException" (version 0.9.15)
     * 
     * This exception is thrown by the RMI library when the network 
     * unexpected loses it's connection.  Can be caused by reset, 
     * software connection abort, connection reset by peer, etc. 
     */
    class UnexpectedCloseException: public virtual 
      ::sidl::rmi::NetworkException {

      //////////////////////////////////////////////////
      // 
      // Special methods for throwing exceptions
      // 

    private:
      static 
      void
      throwException0(
        struct sidl_BaseInterface__object *_exception
      )
        // throws:
      ;

      //////////////////////////////////////////////////
      // 
      // User Defined Methods
      // 

    public:

      //////////////////////////////////////////////////
      // 
      // End User Defined Methods
      // (everything else in this file is specific to
      //  Babel's C++ bindings)
      // 

    public:
      typedef struct sidl_rmi_UnexpectedCloseException__object ior_t;
      typedef struct sidl_rmi_UnexpectedCloseException__external ext_t;
      typedef struct sidl_rmi_UnexpectedCloseException__sepv sepv_t;

      // default constructor
      UnexpectedCloseException() { }

      // static constructor
      static ::sidl::rmi::UnexpectedCloseException _create();

      // RMI constructor
      static ::sidl::rmi::UnexpectedCloseException _create( /*in*/ const 
        std::string& url );

      // RMI connect
      static inline ::sidl::rmi::UnexpectedCloseException _connect( /*in*/ 
        const std::string& url ) { 
        return _connect(url, true);
      }

      // RMI connect 2
      static ::sidl::rmi::UnexpectedCloseException _connect( /*in*/ const 
        std::string& url, /*in*/ const bool ar  );

      // default destructor
      virtual ~UnexpectedCloseException () { }

      // copy constructor
      UnexpectedCloseException ( const UnexpectedCloseException& original );

      // assignment operator
      UnexpectedCloseException& operator= ( const UnexpectedCloseException& rhs 
        );

      // conversion from ior to C++ class
      UnexpectedCloseException ( UnexpectedCloseException::ior_t* ior );

      // Alternate constructor: does not call addRef()
      // (sets d_weak_reference=isWeak)
      // For internal use by Impls (fixes bug#275)
      UnexpectedCloseException ( UnexpectedCloseException::ior_t* ior,
        bool isWeak );

      ior_t* _get_ior() throw() { return reinterpret_cast< ior_t*>(d_self); }

      const ior_t* _get_ior() const throw () { return reinterpret_cast< 
        ior_t*>(d_self); }

      void _set_ior( ior_t* ptr ) throw () { d_self = reinterpret_cast< 
        void*>(ptr); }

      bool _is_nil() const throw () { return (d_self==0); }

      bool _not_nil() const throw () { return (d_self!=0); }

      bool operator !() const throw () { return (d_self==0); }

      static inline const char * type_name() throw () { return 
        "sidl.rmi.UnexpectedCloseException";}

      static struct sidl_rmi_UnexpectedCloseException__object* _cast(const 
        void* src);

      // execute member function by name
      void _exec(const std::string& methodName,
                 ::sidl::rmi::Call& inArgs,
                 ::sidl::rmi::Return& outArgs);

      /**
       * Get the URL of the Implementation of this object (for RMI)
       */
      ::std::string
      _getURL() // throws:
      //     ::sidl::RuntimeException
      ;


      /**
       * Method to set whether or not method hooks should be invoked.
       */
      void
      _set_hooks (
        /* in */bool on
      )
      // throws:
      //     ::sidl::RuntimeException
      ;

      // return true iff object is remote
      bool _isRemote() const { 
        ior_t* self = const_cast<ior_t*>(_get_ior() );
        struct sidl_BaseInterface__object *throwaway_exception;
        return (*self->d_epv->f__isRemote)(self, &throwaway_exception) == TRUE;
      }

      // return true iff object is local
      bool _isLocal() const {
        return !_isRemote();
      }

    protected:
      // Pointer to external (DLL loadable) symbols (shared among instances)
      static const ext_t * s_ext;

    public:
      static const ext_t * _get_ext() throw ( ::sidl::NullIORException );

    }; // end class UnexpectedCloseException
  } // end namespace rmi
} // end namespace sidl

extern "C" {


  #pragma weak sidl_rmi_UnexpectedCloseException__connectI

  #pragma weak sidl_rmi_UnexpectedCloseException__rmicast

  /**
   * Cast method for interface and class type conversions.
   */
  struct sidl_rmi_UnexpectedCloseException__object*
  sidl_rmi_UnexpectedCloseException__rmicast(
    void* obj, struct sidl_BaseInterface__object **_ex);

  /**
   * RMI connector function for the class. (no addref)
   */
  struct sidl_rmi_UnexpectedCloseException__object*
  sidl_rmi_UnexpectedCloseException__connectI(const char * url, sidl_bool ar,
    struct sidl_BaseInterface__object **_ex);


} // end extern "C"
namespace sidl {
  // traits specialization
  template<>
  struct array_traits< ::sidl::rmi::UnexpectedCloseException > {
    typedef array< ::sidl::rmi::UnexpectedCloseException > cxx_array_t;
    typedef ::sidl::rmi::UnexpectedCloseException cxx_item_t;
    typedef struct sidl_rmi_UnexpectedCloseException__array ior_array_t;
    typedef sidl_interface__array ior_array_internal_t;
    typedef struct sidl_rmi_UnexpectedCloseException__object ior_item_t;
    typedef cxx_item_t value_type;
    typedef value_type reference;
    typedef value_type* pointer;
    typedef const value_type const_reference;
    typedef const value_type* const_pointer;
    typedef array_iter< array_traits< ::sidl::rmi::UnexpectedCloseException > > 
      iterator;
    typedef const_array_iter< array_traits< 
      ::sidl::rmi::UnexpectedCloseException > > const_iterator;
  };

  // array specialization
  template<>
  class array< ::sidl::rmi::UnexpectedCloseException >: public interface_array< 
    array_traits< ::sidl::rmi::UnexpectedCloseException > > {
  public:
    typedef interface_array< array_traits< 
      ::sidl::rmi::UnexpectedCloseException > > Base;
    typedef array_traits< ::sidl::rmi::UnexpectedCloseException >::cxx_array_t  
      cxx_array_t;
    typedef array_traits< ::sidl::rmi::UnexpectedCloseException >::cxx_item_t   
      cxx_item_t;
    typedef array_traits< ::sidl::rmi::UnexpectedCloseException >::ior_array_t  
      ior_array_t;
    typedef array_traits< ::sidl::rmi::UnexpectedCloseException 
      >::ior_array_internal_t ior_array_internal_t;
    typedef array_traits< ::sidl::rmi::UnexpectedCloseException >::ior_item_t   
      ior_item_t;

    /**
     * conversion from ior to C++ class
     * (constructor/casting operator)
     */
    array( struct sidl_rmi_UnexpectedCloseException__array* src = 0) : 
      Base(src) {}

    /**
     * copy constructor
     */
    array( const array< ::sidl::rmi::UnexpectedCloseException >&src) : 
      Base(src) {}

    /**
     * assignment
     */
    array< ::sidl::rmi::UnexpectedCloseException >&
    operator =( const array< ::sidl::rmi::UnexpectedCloseException >&rhs ) { 
      if (d_array != rhs._get_baseior()) {
        if (d_array) deleteRef();
        d_array = const_cast<sidl__array *>(rhs._get_baseior());
        if (d_array) addRef();
      }
      return *this;
    }

  };
}

#endif
