//  Copyright © 2019 650 Industries. All rights reserved.

#import <ABI47_0_0EXUpdates/ABI47_0_0EXUpdatesAsset.h>
#import <ABI47_0_0EXUpdates/ABI47_0_0EXUpdatesUtils.h>

#include <stdlib.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Data class that represents an individual asset. The filename is autogenerated if not explicitly
 * set (it should be explicitly set when originating from a database query).
 */
@implementation ABI47_0_0EXUpdatesAsset

- (instancetype)initWithKey:(nullable NSString *)key type:(NSString *)type
{
  if (self = [super init]) {
    _key = key;
    _type = type;
  }
  return self;
}

- (nullable NSString *)filename
{
  if (!_filename) {
    NSString *fileExtension = @"";
    if (_type){
      fileExtension = [_type hasPrefix:@"."] ? _type : [NSString stringWithFormat:@".%@", _type];
    }
    
    if (!_key) {
      // create a filename that's unlikely to collide with any other asset
      _filename = [NSString stringWithFormat:@"asset-%d-%u%@", (int)[NSDate date].timeIntervalSince1970, arc4random(), fileExtension];
    } else {
      _filename = [NSString stringWithFormat:@"%@%@", _key, fileExtension];
    }
  }
  return _filename;
}

@end

NS_ASSUME_NONNULL_END
