import { useState } from 'react';
import { Input, Checkbox } from 'antd';
import './style.css';

const Head = () => {
    const { Search } = Input;

    const [books, setBooks] = useState([]);
    const [inputValue, setInputValue] = useState('');
    const [isHidden, setIsHidden] = useState(false);
    const [searchTerm, setSearchTerm] = useState('');

    const addBook = () => {
        if (inputValue.trim() && !books.includes(inputValue.trim())) {
            setBooks((prevBooks) => [...prevBooks, inputValue.trim()]);
            setInputValue('');
        }
    };

    const deleteBook = (index) => {
        setBooks((prevBooks) => prevBooks.filter((_, i) => i !== index));
    };

    const filteredBooks = books.filter(book =>
        book.toLowerCase().includes(searchTerm.toLowerCase())
    );

    return (
        <div className='container'>
            <div className='header'>
                <h2>Library</h2>
                <p>Books for Students</p>
                <Input
                    placeholder='Search books...'
                    value={searchTerm}
                    onChange={(e) => setSearchTerm(e.target.value)}
                />
            </div>

            <div className='foot'>
                <div id="book_list">
                    <h2 className="title">Books to Read</h2>
                    {!isHidden && (
                        <ul>
                            {filteredBooks.length > 0 ? (
                                filteredBooks.map((book, index) => (
                                    <li key={index}>
                                        <span className="name">{book}</span>
                                        <span
                                            className="delete"
                                            onClick={() => deleteBook(index)}
                                            style={{ cursor: 'pointer', marginLeft: '20px', color: 'red' }}
                                        >
                                            delete
                                        </span>
                                    </li>
                                ))
                            ) : (
                                <li>No books found</li>
                            )}
                        </ul>
                    )}
                </div>

                <Checkbox
                    checked={isHidden}
                    onChange={() => setIsHidden(!isHidden)}
                >
                    Hide all books
                </Checkbox>
                <Search
                    placeholder="Add a book..."
                    allowClear
                    enterButton="Add"
                    style={{ width: 350 }}
                    value={inputValue}
                    onChange={(e) => setInputValue(e.target.value)}
                    onPressEnter={addBook}
                    onSearch={addBook}
                />
            </div>
        </div>
    );
};

export default Head;
