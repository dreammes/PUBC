//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BaseResp : NSObject
{
    int errCode;	// 8 = 0x8
    int type;	// 12 = 0xc
    NSString *errStr;	// 16 = 0x10
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr;
@property(nonatomic) int errCode; // @synthesize errCode;
- (void)dealloc;	// IMP=0x0000000101516eb8
- (id)init;	// IMP=0x0000000101516e58

@end

