//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKRetForOC.h"

@class NSString;

@interface IMSDKAuthResultOC : IMSDKRetForOC
{
    _Bool _isFirstLogin;	// 8 = 0x8
    int _channelId;	// 12 = 0xc
    int _gameId;	// 16 = 0x10
    NSString *_openId;	// 24 = 0x18
    NSString *_innerToken;	// 32 = 0x20
    NSString *_deviceId;	// 40 = 0x28
    long long _tokenExpireTime;	// 48 = 0x30
}

+ (void)removePersistence;	// IMP=0x0000000100630004
+ (id)instanceFromCppResult:(struct IMSDKAuthResult)arg1;	// IMP=0x000000010062f9c0
+ (id)instanceFromPersistence;	// IMP=0x000000010062f898
+ (id)instanceFromHttpResult:(id)arg1;	// IMP=0x000000010062f50c
@property(nonatomic) _Bool isFirstLogin; // @synthesize isFirstLogin=_isFirstLogin;
@property(nonatomic) long long tokenExpireTime; // @synthesize tokenExpireTime=_tokenExpireTime;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *innerToken; // @synthesize innerToken=_innerToken;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) int gameId; // @synthesize gameId=_gameId;
@property(nonatomic) int channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;	// IMP=0x0000000100630f20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100630964
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001006304bc
- (struct IMSDKAuthResult)getCppResult;	// IMP=0x00000001006301c8
- (void)savePersistence;	// IMP=0x00000001006300bc

@end

