//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQApiObject : NSObject
{
    int _shareDestType;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_description;	// 24 = 0x18
    unsigned long long _cflag;	// 32 = 0x20
}

@property(nonatomic) int shareDestType; // @synthesize shareDestType=_shareDestType;
@property(nonatomic) unsigned long long cflag; // @synthesize cflag=_cflag;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;	// IMP=0x0000000100b3155c
- (id)init;	// IMP=0x0000000100b31524

@end

