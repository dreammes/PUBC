//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface HelpshiftSupportMetaData : NSObject
{
    NSDictionary *_metaData;	// 8 = 0x8
    NSArray *_issueTags;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *issueTags; // @synthesize issueTags=_issueTags;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;	// IMP=0x00000001013b77d0
- (id)toDictionary;	// IMP=0x00000001013b7640
- (id)initWithMetaData:(id)arg1 andTags:(id)arg2;	// IMP=0x00000001013b7598
- (id)initWithMetaData:(id)arg1;	// IMP=0x00000001013b7510
- (id)init;	// IMP=0x00000001013b74f8

@end
