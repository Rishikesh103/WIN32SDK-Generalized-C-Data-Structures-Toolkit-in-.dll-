#ifndef GENERILIZED_DS_H
#define GENERILIZED_DS_H

// This is a standard Windows programming technique for DLLs.
#ifdef GENERILIZED_DS_EXPORTS
#define GENERILIZED_DS_API __declspec(dllexport)
#else
#define GENERILIZED_DS_API __declspec(dllimport)
#endif

// We must include the original toolkit so the compiler knows the class definitions.
#include "Generilized_DS_Toolkit.h"

// --- EXPLICIT EXPORT DECLARATIONS ---
// Here, we DECLARE which specific versions of our classes will be exported from the DLL.

extern template class GENERILIZED_DS_API SinglyLL<int>;
extern template class GENERILIZED_DS_API SinglyLL<char>;
extern template class GENERILIZED_DS_API DoublyLL<int>;
extern template class GENERILIZED_DS_API StackX<int>;
extern template class GENERILIZED_DS_API QueueX<double>;
extern template class GENERILIZED_DS_API BST<int>;

#endif // GENERILIZED_DS_H