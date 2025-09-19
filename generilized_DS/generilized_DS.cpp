#include "generilized_DS.h" // We need to include our public header.

// --- EXPLICIT TEMPLATE INSTANTIATIONS ---
// For every "extern template" line in generilized_DS.h, you must have a
// corresponding "template class" line here. This is the implementation part.

template class SinglyLL<int>;
template class SinglyLL<char>;
template class DoublyLL<int>;
template class StackX<int>;
template class QueueX<double>;
template class BST<int>;