//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasReportTools : NSObject
{
}

+ (_Bool)_isGzippedData:(id)arg1;	// IMP=0x0000000100586ecc
+ (unsigned long long)_baseDecode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 requirePadding:(_Bool)arg6;	// IMP=0x0000000100586cfc
+ (id)_baseDecode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 requirePadding:(_Bool)arg4;	// IMP=0x0000000100586be4
+ (unsigned long long)_baseEncode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 padded:(_Bool)arg6;	// IMP=0x0000000100586ac0
+ (id)_baseEncode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 padded:(_Bool)arg4;	// IMP=0x00000001005869bc
+ (id)decodeString:(id)arg1;	// IMP=0x0000000100586900
+ (id)encodeData:(id)arg1;	// IMP=0x0000000100586874
+ (id)gunzippedData:(id)arg1;	// IMP=0x0000000100586694
+ (id)gzippedData:(id)arg1;	// IMP=0x00000001005864c4
+ (id)urlDecode:(id)arg1 count:(long long)arg2;	// IMP=0x0000000100586178
+ (id)urlEncode:(id)arg1 count:(long long)arg2;	// IMP=0x0000000100585e04
+ (id)createUUID;	// IMP=0x0000000100585d98

@end

