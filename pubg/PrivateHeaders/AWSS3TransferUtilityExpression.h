//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AWSS3TransferUtilityExpression : NSObject
{
    CDUnknownBlockType _progressBlock;	// 8 = 0x8
    NSMutableDictionary *_internalRequestHeaders;	// 16 = 0x10
    NSMutableDictionary *_internalRequestParameters;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *internalRequestParameters; // @synthesize internalRequestParameters=_internalRequestParameters;
@property(retain, nonatomic) NSMutableDictionary *internalRequestHeaders; // @synthesize internalRequestHeaders=_internalRequestHeaders;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;	// IMP=0x0000000100c27a00
- (void)assignRequestParameters:(id)arg1;	// IMP=0x0000000100c27804
- (void)assignRequestHeaders:(id)arg1;	// IMP=0x0000000100c2766c
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;	// IMP=0x0000000100c275d8
- (void)setValue:(id)arg1 forRequestHeader:(id)arg2;	// IMP=0x0000000100c27544
@property(readonly, nonatomic) NSDictionary *requestParameters;
@property(readonly, nonatomic) NSDictionary *requestHeaders;
- (id)init;	// IMP=0x0000000100c273d4

@end

