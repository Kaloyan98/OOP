#include "FileAttribute.h"

FileManager::FileNode::FileNode()
{
	this->m_next = NULL;
}

FileManager::FileNode::~FileNode()
{
	delete this->m_data;
}

FileManager::FileNode::FileNode(File* file)
{
	this->m_next = NULL;
	this->m_data = file;
}

FileManager::FileNode* FileManager::FileNode::getNext() const
{
	return this->m_next;
}

void FileManager::FileNode::setNext(FileManager::FileNode* nextNode)
{
	this->m_next = nextNode;
}

File* FileManager::FileNode::getData() const
{
	return this->m_data;
}

FileManager::FileManager()
{
	this->m_head = NULL;
	this->m_tail = NULL;
}

FileManager::~FileManager()
{
	FileManager::FileNode* nodeToDelete = this->m_head;
	while (nodeToDelete != NULL)
	{
		this->m_head = this->m_head->getNext();

		delete nodeToDelete;

		nodeToDelete = this->m_head;
	}
}

void FileManager::add(File* file)
{
	FileManager::FileNode* fileNode = new FileManager::FileNode(file);

	if (this->m_head == NULL) {
		this->m_head = fileNode;
		this->m_tail = fileNode;
	}
	else
	{
		this->m_tail->setNext(fileNode);

		this->m_tail = fileNode;
	}
}