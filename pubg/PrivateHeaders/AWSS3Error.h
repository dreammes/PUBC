//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3Error : AWSModel
{
    NSString *_code;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    NSString *_versionId;	// 32 = 0x20
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfe2b8
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;	// IMP=0x0000000100bfe40c

@end

