//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class HsResponseModel, NSDictionary, NSString;

@protocol HsResponseStorage
- (NSDictionary *)takeBackgroundResponses;
- (void)storeBackgroundResponse:(HsResponseModel *)arg1 forRequest:(NSString *)arg2;
- (void)destroyStorage;
- (void)initStorage;
@end

