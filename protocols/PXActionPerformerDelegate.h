/* Generated by RuntimeBrowser.
 */

@protocol PXActionPerformerDelegate <NSObject>

@optional

- (void)actionPerformer:(PXActionPerformer *)arg1 didChangeState:(unsigned int)arg2;
- (BOOL)actionPerformer:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: PXActionPerformer *, struct NSObject { Class x1; }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)actionPerformer:(PXActionPerformer *)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;

@end
