//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HsFaqListItem : NSObject
{
    NSString *_publishId;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSArray *_categoryTags;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *categoryTags; // @synthesize categoryTags=_categoryTags;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
- (void).cxx_destruct;	// IMP=0x000000010136d950
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010136d760

@end

