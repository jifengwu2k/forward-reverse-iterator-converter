#ifndef FORWARD_REVERSE_ITERATOR_CONVERTER_HPP
#define FORWARD_REVERSE_ITERATOR_CONVERTER_HPP
#include <iterator>



template <typename BidirectionalIterator> std::reverse_iterator<BidirectionalIterator> to_reverse(BidirectionalIterator it) {
    return std::reverse_iterator<BidirectionalIterator>(std::next(it));
}


template <typename BidirectionalIterator> BidirectionalIterator to_forward(std::reverse_iterator<BidirectionalIterator> rit) {
    return std::prev(rit.base());
}
#endif // FORWARD_REVERSE_ITERATOR_CONVERTER_HPP