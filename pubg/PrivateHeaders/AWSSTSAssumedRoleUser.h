//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSSTSAssumedRoleUser : AWSModel
{
    NSString *_arn;	// 8 = 0x8
    NSString *_assumedRoleId;	// 16 = 0x10
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdd378
@property(retain, nonatomic) NSString *assumedRoleId; // @synthesize assumedRoleId=_assumedRoleId;
@property(retain, nonatomic) NSString *arn; // @synthesize arn=_arn;
- (void).cxx_destruct;	// IMP=0x0000000100bdd454

@end

