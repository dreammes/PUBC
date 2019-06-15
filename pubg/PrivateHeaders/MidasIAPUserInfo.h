//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MidasIAPUserInfo : NSObject <NSCopying>
{
    _Bool _isFirstCharge;	// 8 = 0x8
    NSString *_openId;	// 16 = 0x10
    NSString *_openKey;	// 24 = 0x18
    NSString *_sessionId;	// 32 = 0x20
    NSString *_sessionType;	// 40 = 0x28
    NSString *_payId;	// 48 = 0x30
    NSString *_authKey;	// 56 = 0x38
    NSString *_pf;	// 64 = 0x40
    NSString *_pfKey;	// 72 = 0x48
    NSString *_zoneId;	// 80 = 0x50
    long long _sessionTokenType;	// 88 = 0x58
}

@property(nonatomic) long long sessionTokenType; // @synthesize sessionTokenType=_sessionTokenType;
@property(nonatomic) _Bool isFirstCharge; // @synthesize isFirstCharge=_isFirstCharge;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
@property(retain, nonatomic) NSString *pfKey; // @synthesize pfKey=_pfKey;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
- (void).cxx_destruct;	// IMP=0x0000000100526ce4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005264c4
- (void)reset;	// IMP=0x00000001005263cc
- (id)init;	// IMP=0x0000000100526370

@end

