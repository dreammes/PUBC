//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSNumber;

@interface AWSS3AbortIncompleteMultipartUpload : AWSModel
{
    NSNumber *_daysAfterInitiation;	// 8 = 0x8
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf6174
@property(retain, nonatomic) NSNumber *daysAfterInitiation; // @synthesize daysAfterInitiation=_daysAfterInitiation;
- (void).cxx_destruct;	// IMP=0x0000000100bf6210

@end

