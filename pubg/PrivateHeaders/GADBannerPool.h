//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GADBannerPool : NSObject
{
    NSMutableArray *_bannerPool;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001009429bc
@property(readonly, nonatomic) long long count;
- (void)removeEntry:(id)arg1;	// IMP=0x0000000100942984
- (id)nextEntry;	// IMP=0x000000010094290c
- (void)addEntry:(id)arg1;	// IMP=0x00000001009427b4
- (id)init;	// IMP=0x0000000100942734

@end
