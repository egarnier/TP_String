//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __STRING_H__
#define __STRING_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>



// ===========================================================================
//                                Project Files
// ===========================================================================




// ===========================================================================
//                              Class declarations
// ===========================================================================






class String
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    String(const char* phrase);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~String(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
<<<<<<< HEAD
    int GetSize(void) const;
=======
    char* Get_str(void) const;
>>>>>>> 431d956c45002e89eada6b59e8f111448eeffafc
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================

    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================
    size_t capacity() const;

    // =======================================================================
    //                             Public Attributes
    // =======================================================================





  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*Template_class(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
    String(const String &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };


    // =======================================================================
    //                              Protected Methods
    // =======================================================================

    // =======================================================================
    //                             Protected Attributes
    // =======================================================================
    char* str;
<<<<<<< HEAD
    int size;
    int capacity;
    static int MAX_SIZE;
=======
    int length;
    int capacity;
>>>>>>> 431d956c45002e89eada6b59e8f111448eeffafc
};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================
char* Get_str(void){return str;}
// ===========================================================================
//                              Setters' definitions
// ===========================================================================

// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __STRING_H__

