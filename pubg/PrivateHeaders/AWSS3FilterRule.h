//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3FilterRule : AWSModel
{
    long long _name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)nameJSONTransformer;	// IMP=0x0000000100bfe5b8
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfe524
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x0000000100bfe740

@end
