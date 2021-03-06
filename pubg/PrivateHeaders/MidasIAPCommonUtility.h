//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasIAPCommonUtility : NSObject
{
}

+ (_Bool)isGuestMode:(id)arg1 sessionType:(id)arg2;	// IMP=0x000000010052196c
+ (id)JSONObjectFromString:(id)arg1;	// IMP=0x00000001005216e0
+ (id)JSONStringFromObject:(id)arg1;	// IMP=0x00000001005213b8
+ (_Bool)isPureInt:(id)arg1;	// IMP=0x0000000100521304
+ (id)getValueString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010052109c
+ (id)getMidasBundle;	// IMP=0x0000000100520e70
+ (void)resetMultiTouch;	// IMP=0x0000000100520d7c
+ (_Bool)isMultiTouch;	// IMP=0x0000000100520c34
+ (id)localPriceFromLocale:(id)arg1 price:(id)arg2;	// IMP=0x0000000100520b44
+ (void)registerBugly:(id)arg1;	// IMP=0x00000001005209dc
+ (struct CGSize)getScreenSizeByOrientation;	// IMP=0x0000000100520874
+ (_Bool)isIpValid:(id)arg1;	// IMP=0x00000001005207e0
+ (id)gunzippedData:(id)arg1;	// IMP=0x0000000100520600
+ (id)gzippedData:(id)arg1;	// IMP=0x0000000100520430
+ (_Bool)isGzippedData:(id)arg1;	// IMP=0x00000001005203a0
+ (_Bool)isSystemVersionAboveiOS7;	// IMP=0x000000010052037c
+ (void)registerUserAgent:(id)arg1;	// IMP=0x000000010052028c
+ (id)bundleSeedID:(int *)arg1;	// IMP=0x00000001005200ac
+ (id)createGUID;	// IMP=0x0000000100520040
+ (_Bool)checkGUIDService;	// IMP=0x000000010051fe68
+ (void)findService:(id)arg1 tag:(id)arg2 saveUID:(id)arg3 group:(id)arg4;	// IMP=0x000000010051fbc0
+ (void)registerAppUid;	// IMP=0x000000010051fb2c
+ (void)registerUid;	// IMP=0x000000010051fa10
+ (void)registerInitVid;	// IMP=0x000000010051f97c
+ (id)getMacAddress;	// IMP=0x000000010051f734
+ (_Bool)isWechatInstalled;	// IMP=0x000000010051f66c
+ (_Bool)isQQInstalled;	// IMP=0x000000010051f5a4
+ (_Bool)isDeviceInvalid;	// IMP=0x000000010051f3e4
+ (void)showAlertController:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 confirmBtnTitle:(id)arg4 completion:(CDUnknownBlockType)arg5 onViewController:(id)arg6 dismissedAfterConfirm:(_Bool)arg7;	// IMP=0x000000010051ece8
+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 confirmBtnTitle:(id)arg4 completion:(CDUnknownBlockType)arg5 onViewController:(id)arg6;	// IMP=0x000000010051eae0
+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 completion:(CDUnknownBlockType)arg4 onViewController:(id)arg5;	// IMP=0x000000010051e8fc
+ (struct CGSize)getSizeRatio:(long long)arg1;	// IMP=0x000000010051e7c8
+ (_Bool)ignoreOrientation;	// IMP=0x000000010051e73c
+ (id)SHA256:(id)arg1;	// IMP=0x000000010051e65c
+ (id)SHA1:(id)arg1;	// IMP=0x000000010051e584
+ (id)sha1Str:(id)arg1;	// IMP=0x000000010051e46c
+ (id)md5:(id)arg1;	// IMP=0x000000010051e35c
+ (double)rotateAngleFromOrientation:(long long)arg1 toOrientation:(long long)arg2;	// IMP=0x000000010051e2b4
+ (struct CGAffineTransform)transformForOrientation:(long long)arg1;	// IMP=0x000000010051e1d8
+ (id)filePath:(id)arg1;	// IMP=0x000000010051e0f8
+ (id)vendorString;	// IMP=0x000000010051e004
+ (id)platform;	// IMP=0x000000010051df54
+ (id)imageNamed:(id)arg1;	// IMP=0x000000010051de3c
+ (struct CGSize)getSystemScreenMetrics:(long long)arg1;	// IMP=0x000000010051dd40
+ (id)getSubview:(id)arg1 byTagId:(unsigned long long)arg2;	// IMP=0x000000010051dbe0
+ (void)load;	// IMP=0x000000010051dad0

@end

