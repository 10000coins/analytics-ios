//
//  SEGCrypto.h
//  Analytics
//
//  Copyright © 2016 Segment. All rights reserved.
//

@protocol SEGCrypto <NSObject>

- (NSData *_Nullable)encrypt:(NSData *_Nonnull)data;
- (NSData *_Nullable)decrypt:(NSData *_Nonnull)data;

@end
