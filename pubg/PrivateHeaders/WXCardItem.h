//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXCardItem : NSObject
{
    unsigned int cardState;	// 8 = 0x8
    NSString *cardId;	// 16 = 0x10
    NSString *extMsg;	// 24 = 0x18
    NSString *encryptCode;	// 32 = 0x20
    NSString *appID;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(nonatomic) unsigned int cardState; // @synthesize cardState;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
- (void)dealloc;	// IMP=0x0000000101517f44

@end

