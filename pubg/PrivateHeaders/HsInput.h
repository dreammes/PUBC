//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HsInput : NSObject
{
    _Bool _required;	// 8 = 0x8
    NSString *_botInfo;	// 16 = 0x10
    NSString *_inputLabel;	// 24 = 0x18
    NSString *_skipLabel;	// 32 = 0x20
}

@property(retain) NSString *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain) NSString *inputLabel; // @synthesize inputLabel=_inputLabel;
@property _Bool required; // @synthesize required=_required;
@property(retain) NSString *botInfo; // @synthesize botInfo=_botInfo;
- (void).cxx_destruct;	// IMP=0x00000001014a9734
- (id)initWithBotInfo:(id)arg1 required:(_Bool)arg2 inputLabel:(id)arg3 skipLabel:(id)arg4;	// IMP=0x00000001014a95c8

@end
