#include "Node.h"

Node* Node::_createNode(int _IData)
{
    Node* _PtrNode = new Node();
    if (!_PtrNode)
    {
        return nullptr;
    }
    _PtrNode->_IData = _IData;
    _PtrNode->_PtrNext = nullptr;
    return _PtrNode;
}
