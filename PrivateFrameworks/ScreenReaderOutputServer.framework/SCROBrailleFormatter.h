/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying> {
    BOOL _anyUnread;
    id _appToken;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    NSInteger _contractionMode;
    BOOL _currentUnread;
    NSInteger _displayMode;
    NSInteger _firstToken;
    NSInteger _lastToken;
    BOOL _showDotsSevenAndEight;
    BOOL _showEightDot;
    NSAttributedString *_statusText;
    struct __CFDictionary { } *_tokenDictionary;
}

- (void)addText:(id)arg1 selection:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 token:(NSInteger)arg3 focused:(BOOL)arg4;
- (BOOL)anyUnread;
- (id)appToken;
- (struct __CFArray { }*)chunkArray;
- (struct __CFDictionary { }*)chunkDictionary;
- (NSInteger)contractionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)currentUnread;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)displayMode;
- (NSInteger)firstToken;
- (id)initWithContractionMode:(NSInteger)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3;
- (NSInteger)lastToken;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(BOOL)arg1;
- (void)setDisplayMode:(NSInteger)arg1;
- (void)setStatusText:(id)arg1;
- (BOOL)showDotsSevenAndEight;
- (BOOL)showEightDot;
- (id)statusText;
- (void)translate;

@end