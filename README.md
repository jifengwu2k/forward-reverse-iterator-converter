# Forward Reverse Iterator Converter

Convert between forward and reverse iterators, and let the converted iterators point to the same elements.

## When to Use

- When you need to pass the same logical position between forward/reverse iterator views
- When working with algorithms that require specific iterator directions
- When implementing iterator adapters that need direction-agnostic positioning

## Key Features

- **Position Preservation**: Converted iterators always point to the same element
- **Header-Only**: Single include with no dependencies
- **Exception Neutral**: Never throws (unless iterator operations throw)

## Example Usage

```cpp
std::vector<int> data {10, 20, 30, 40};

// Forward to reverse
auto fit = data.begin() + 2;
auto rit = to_reverse(fit);
assert(*fit == *rit); // Both point to 30

// Reverse back to forward
auto recovered = to_forward(rit);
assert(fit == recovered);
```

## API Reference

### `to_reverse`

```cpp
template <typename BidirectionalIterator> std::reverse_iterator<BidirectionalIterator> to_reverse(BidirectionalIterator it)
```

### `to_forward`

```cpp
template <typename BidirectionalIterator> BidirectionalIterator to_forward(std::reverse_iterator<BidirectionalIterator> rit)
```