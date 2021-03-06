//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TWTRJSONConvertible.h"

@class NSString;

@interface TWTRTweetEntity : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    long long _startIndex;	// 8 = 0x8
    long long _endIndex;	// 16 = 0x10
}

@property(readonly, nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (id)accessibilityValue;	// IMP=0x00000001008382b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008382ac
- (_Bool)isEqualToTweetEntity:(id)arg1;	// IMP=0x0000000100838210
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100838184
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001008380f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010083803c
- (id)initWithStartIndex:(long long)arg1 endIndex:(long long)arg2;	// IMP=0x0000000100837fd8
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0000000100837de0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

