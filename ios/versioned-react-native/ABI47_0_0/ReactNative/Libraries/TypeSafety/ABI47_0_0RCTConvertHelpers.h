/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <optional>

#import <vector>

#import <Foundation/Foundation.h>

#import <ABI47_0_0FBLazyVector/ABI47_0_0FBLazyVector.h>

namespace ABI47_0_0facebook {
namespace ABI47_0_0React {
  template<typename T>
  using LazyVector = FB::LazyVector<T, id>;
}}

template<typename ContainerT>
NSArray *ABI47_0_0RCTConvertVecToArray(const ContainerT &vec, id (^convertor)(typename ContainerT::value_type element))
{
  NSMutableArray *array = [NSMutableArray new];
  for (size_t i = 0, size = vec.size(); i < size; ++i) {
    id object = convertor(vec[i]);
    array[i] = object ?: (id)kCFNull;
  }
  return array;
}
template<typename ContainerT>
NSArray *ABI47_0_0RCTConvertVecToArray(const ContainerT &vec)
{
  return ABI47_0_0RCTConvertVecToArray(vec, ^id(typename ContainerT::value_type element) { return element; });
}

template<typename ContainerT>
NSArray *ABI47_0_0RCTConvertOptionalVecToArray(const std::optional<ContainerT> &vec, id (^convertor)(typename ContainerT::value_type element))
{
  return vec.has_value() ? ABI47_0_0RCTConvertVecToArray(vec.value(), convertor) : nil;
}

template<typename ContainerT>
NSArray *ABI47_0_0RCTConvertOptionalVecToArray(const std::optional<ContainerT> &vec)
{
  return vec.has_value() ? ABI47_0_0RCTConvertVecToArray(vec.value(), ^id(typename ContainerT::value_type element) { return element; }) : nil;
}

bool ABI47_0_0RCTBridgingToBool(id value);
std::optional<bool> ABI47_0_0RCTBridgingToOptionalBool(id value);
NSString *ABI47_0_0RCTBridgingToString(id value);
NSString *ABI47_0_0RCTBridgingToOptionalString(id value);
std::optional<double> ABI47_0_0RCTBridgingToOptionalDouble(id value);
double ABI47_0_0RCTBridgingToDouble(id value);
NSArray *ABI47_0_0RCTBridgingToArray(id value);

template<typename T>
ABI47_0_0facebook::ABI47_0_0React::LazyVector<T> ABI47_0_0RCTBridgingToVec(id value, T (^ctor)(id element))
{
  NSArray *array = ABI47_0_0RCTBridgingToArray(value);
  typedef typename ABI47_0_0facebook::ABI47_0_0React::LazyVector<T>::size_type _size_t;
  _size_t size = static_cast<_size_t>(array.count);
  return ABI47_0_0facebook::ABI47_0_0React::LazyVector<T>::fromUnsafeRawValue(array, size, ctor);
}

template<typename T>
std::optional<ABI47_0_0facebook::ABI47_0_0React::LazyVector<T>> ABI47_0_0RCTBridgingToOptionalVec(id value, T (^ctor)(id element))
{
  if (value == nil || value == (id)kCFNull) {
    return std::nullopt;
  } else {
    return ABI47_0_0RCTBridgingToVec(value, ctor);
  }
}
