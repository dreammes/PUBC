//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIRClearcutWriter : NSObject
{
    int _fd;	// 8 = 0x8
    unsigned long long _numBytes;	// 16 = 0x10
}

@property(nonatomic) unsigned long long numBytes; // @synthesize numBytes=_numBytes;
@property(nonatomic) int fd; // @synthesize fd=_fd;
- (_Bool)writeLogEvent:(id)arg1;	// IMP=0x00000001009059c4
- (void)close;	// IMP=0x0000000100905968
- (void)dealloc;	// IMP=0x000000010090591c
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100905790

@end
