//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSString, NSURL;

@interface VKShareLink : VKObject
{
    NSString *_title;	// 8 = 0x8
    NSURL *_link;	// 16 = 0x10
}

@property(copy, nonatomic) NSURL *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100b68e44
- (id)initWithTitle:(id)arg1 link:(id)arg2;	// IMP=0x0000000100b68d14

@end

